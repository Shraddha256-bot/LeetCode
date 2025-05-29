from typing import List
from collections import deque

class Solution:
    def maxTargetNodes(self, edges1: List[List[int]], edges2: List[List[int]]) -> List[int]:
        def build_adj(edges: List[List[int]], n: int) -> List[List[int]]:
            adj = [[] for _ in range(n)]
            for u, v in edges:
                adj[u].append(v)
                adj[v].append(u)
            return adj

        def bfs_coloring(adj: List[List[int]], n: int) -> (List[int], List[int]):
            color = [-1] * n
            count = [0, 0]
            queue = deque([0])
            color[0] = 0
            count[0] += 1

            while queue:
                node = queue.popleft()
                for neighbor in adj[node]:
                    if color[neighbor] == -1:
                        color[neighbor] = 1 - color[node]
                        count[color[neighbor]] += 1
                        queue.append(neighbor)
            return color, count

        n = len(edges1) + 1
        m = len(edges2) + 1

        adj1 = build_adj(edges1, n)
        adj2 = build_adj(edges2, m)

        color1, count1 = bfs_coloring(adj1, n)
        _, count2 = bfs_coloring(adj2, m)

        base = max(count2)  # max of even/odd group in Tree2
        result = [count1[color1[i]] + base for i in range(n)]

        return result
