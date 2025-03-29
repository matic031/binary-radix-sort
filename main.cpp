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

