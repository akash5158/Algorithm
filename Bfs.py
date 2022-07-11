import collections
def bfs(graph, root):
    visited,Q = set(),collections.deque([root])
    visited.add(root)
    while Q:
        vertex = Q.popleft()
        print(str(vertex) + " ", end="")

        for neighbour in graph[vertex]:
            if neighbour not in visited:
                visited.add(neighbour)
                Q.append(neighbour)

if __name__ == '__main__':
    graph = {0: [1, 2], 1: [2], 2: [3], 3: [1, 2]}
    print("Breadth First Traversal: ")
    bfs(graph, 0)
