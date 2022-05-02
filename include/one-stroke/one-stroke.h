#pragma once
#include <vector>

namespace puzzle_solver {
	class OneStroke {
		public:
			OneStroke();
			
			std::vector<std::vector<int>> solve(std::vector<std::vector<std::pair<int, int>>>& graph);
			static std::vector<std::vector<std::pair<int, int>>> createGraph(const std::vector<std::vector<int>>& matrix);
		private:
	};
}