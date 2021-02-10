#pragma once
#include <unordered_map>
#include <numeric>
#include <algorithm>
#include "../../util/VectorHasher.h"
#include "../Problem.h"

class AbsoluteOrderingProblem : public Problem {
public:
	AbsoluteOrderingProblem(int numberOfFunctions);
	double evaluate(std::vector<int>& solution) override;

private:
	std::vector<int> problemCoding;
	int numberOfFunctions;
	double maximumFitness;
	const static std::unordered_map<std::vector<int>, double, VectorHasher> functionValues;
	std::unordered_map<std::vector<int>, double, VectorHasher> relativeFunctionValues;
};
