#include <vector>
#include <algorithm>

#include <iostream>

using std::vector;

void rotate(vector<int>& vectorP) {
	if (vectorP.size() == 0) {
		return;
	}

	auto i = end(vectorP) - 1;
	int last = *i;
	while (i != begin(vectorP)) {
		*i = *(i - 1);
		--i;
	}
	vectorP[0] = last;
}

vector<int> solution(vector<int>& vectorP, int K) {
	// Repeat K time
	for (int i = 0; i < K; ++i) {
		rotate(vectorP);
	}

	return vectorP;
}

int main() {
	vector<int> vec = { 2, 5, 4, 6, 8, 2, 3 };
	int rotRepetition = 3;

	vector<int> rotatedVector = solution(vec, rotRepetition);

	std::cout << "Rotate the vector " << rotRepetition << " time. Result: ";
	for (auto i = rotatedVector.begin(); i != rotatedVector.end(); ++i) {
		std::cout << *i;
	}

	return 0;
}