from collections import deque
from typing import List

class Solution:
    def bfs(self, adj: List[List[int]], start: int) -> List[int]:
        n = len(adj)
        dist = [float('inf')] * n
        visited = [False] * n
        queue = deque([(start, 0)])
        dist[start] = 0
        visited[start] = True

        while queue:
            node, d = queue.popleft()
            for neighbor in adj[node]:
                if not visited[neighbor]:
                    visited[neighbor] = True
                    dist[neighbor] = d + 1
                    queue.append((neighbor, d + 1))
        return dist

    def maxTargetNodes(self, edges1: List[List[int]], edges2: List[List[int]], k: int) -> List[int]:
        n = len(edges1) + 1
        m = len(edges2) + 1

        tree1 = [[] for _ in range(n)]
        tree2 = [[] for _ in range(m)]

        for u, v in edges1:
            tree1[u].append(v)
            tree1[v].append(u)

        for u, v in edges2:
            tree2[u].append(v)
            tree2[v].append(u)

        # Precompute distances
        dists1 = [self.bfs(tree1, i) for i in range(n)]
        dists2 = [self.bfs(tree2, j) for j in range(m)]

        # Precompute counts of nodes within distance ≤ k for each node in tree1
        count1 = [sum(1 for d in dists1[i] if d <= k) for i in range(n)]

        # Precompute counts of nodes within distance ≤ (k - 1) for each node in tree2
        count2 = [sum(1 for d in dists2[j] if d <= k - 1) for j in range(m)]

        # For each node in tree1, try connecting to each node in tree2
        result = []
        for i in range(n):
            max_reachable = 0
            for j in range(m):
                total = count1[i] + count2[j]
                max_reachable = max(max_reachable, total)
            result.append(max_reachable)
        return result
