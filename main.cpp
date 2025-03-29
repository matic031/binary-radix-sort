#include <iostream>
#include <fstream>
#include <vector>

bool readFile(std::vector<int>& vec, const char s[]) {
	std::ifstream input(s);
	int st;
	if (!input.is_open()) return false;
	while (input >> st) {
		vec.push_back(st);
		while (isspace(input.peek())) input.get();
	}
	input.close();
	return true;
}

void outFile(std::vector<int>& vec, unsigned int velikost) {
	std::ofstream output("out.txt");
	for (int i = 0; i < velikost; i++) {
		output << vec[i] << ' ';
	}
}

bool areEqual(const std::vector<int>& A, const std::vector<int>& B) {
	for (size_t i = 0; i < A.size(); ++i) {
		if (A[i] != B[i]) {
			return false;
		}
	}
	return true; 
}

