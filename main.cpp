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

void bubbleSort(int arr[], int indArr[], int max) {
	int i, j;
	bool swapped;
	for (i = 0; i < max - 1; i++) {
		swapped = false;
		for (j = 0; j < max - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				std::swap(arr[j], arr[j + 1]);
				std::swap(indArr[j], indArr[j + 1]);
				swapped = true;
			}
		}
		if (!swapped) break;
	}
}

