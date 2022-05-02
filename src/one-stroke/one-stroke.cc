#include <one-stroke/one-stroke.h>

namespace puzzle_solver {
  OneStroke::OneStroke() {}

  std::vector<std::vector<int>> OneStroke::solve(std::vector<std::vector<std::pair<int, int>>>& graph) {
    std::vector<std::vector<int>> ans;
    
  }

  std::vector<std::vector<std::pair<int, int>>> OneStroke::createGraph(const std::vector<std::vector<int>>& matrix) {
    std::vector<std::vector<std::pair<int, int>>> graph;
    for (size_t i = 0; i < matrix.size(); i++) {
      graph.push_back(std::vector<std::pair<int,int>>());
      for (size_t j = 0; j < matrix[0].size(); j++) {
        if (matrix[i][j] > 0) {
          graph[i].push_back(std::pair<int,int>(j, matrix[i][j]));
        }
      }
    }

    return graph;
  }
}