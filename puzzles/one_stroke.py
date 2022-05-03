class OneStroke:
  def __init__(self):
    pass

  def create_graph(self, matrix):
    graph = []
    for i, row in enumerate(matrix):
      graph.append([])
      for j, elem in enumerate(row):
        if elem > 0:
          graph[i].append((j, elem))
    return graph

  def solve(self, graph):
    ans = []
    pass

  def __solvable(self, graph, curr, ans):
    if self.__valid_solve(graph):
      return True

    for edge in graph[curr]:
      if edge[1] > 0:
        edge[1] -= 1
        ans.append((curr, edge[0]))
        if self.__solvable(graph, edge[0], ans):
          return True
        edge[1] +=1
        ans.pop()
    return False

  def __valid_solve(self, graph):
    for node in graph:
      for neighbor in node:
        if neighbor[1] > 0:
          return False
    return True