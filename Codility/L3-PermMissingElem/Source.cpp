#include <vector>
#include <algorithm>

#include <iostream>

using std::vector;

int solution(vector<int>& A) {
	std::sort(A.begin(), A.end());

	// Handle exceptions
	if (A.size() == 0) {
		return 1;

	}
	if (A[0] != 1) {
		return 1;

	}

	int val{ 1 };

	// Compare the elements with a custom iterator
	for (size_t i = 0; i < A.size(); i++) {
		if (A[i] != val) {
			return val;
		}
		else {
			val++;
		}
	}
}

int main() {
	vector<int> vector = { 5, 1, 6, 7, 2, 4, 8 };

	std::cout << "The missing number is " << solution(vector) << "." << std::endl;

	return 0;
}