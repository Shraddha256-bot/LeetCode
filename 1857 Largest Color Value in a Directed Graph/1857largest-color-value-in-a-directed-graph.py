class Solution:
    def largestPathValue(self, colors: str, edges: List[List[int]]) -> int:
        n = len(colors)

        # Build graph and indegree list
        graph = [[] for _ in range(n)]
        indegree = [0] * n
        for u, v in edges:
            graph[u].append(v)
            indegree[v] += 1

        # Initialize color frequency table
        color_count = [[0] * 26 for _ in range(n)]

        # Queue simulation with list and front pointer
        queue = []
        for i in range(n):
            if indegree[i] == 0:
                queue.append(i)

        visited = 0
        max_color_value = 0
        front = 0

        while front < len(queue):
            node = queue[front]
            front += 1
            visited += 1

            color_idx = ord(colors[node]) - ord('a')
            color_count[node][color_idx] += 1
            max_color_value = max(max_color_value, color_count[node][color_idx])

            for neighbor in graph[node]:
                for c in range(26):
                    color_count[neighbor][c] = max(color_count[neighbor][c], color_count[node][c])
                indegree[neighbor] -= 1
                if indegree[neighbor] == 0:
                    queue.append(neighbor)

        return -1 if visited < n else max_color_value
