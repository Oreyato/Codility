#include <bitset>
#include <string.h>

#include <iostream>

int solution(int N) {
	// Convert N to binary number
	std::bitset<32> b(N);
	// Convert it to string
	std::string binaryString = b.to_string();

	// Initialise variables
	int maxBitset{ 0 };
	int currentBitSet{ 0 };
	bool wasOneBefore{ false };

	// Browse the array
	for (auto i = binaryString.begin(); i != binaryString.end(); ++i) {
		// If there is a one
		if (*i == '1') {
			// Update the wasOneBefore boolean
			wasOneBefore = true;
			// If current bitset is greater than the previous maximum recorded bitset
			if (currentBitSet > maxBitset) {
				// Update maximum bitset
				maxBitset = currentBitSet;
			}
			// Reset current bit set
			currentBitSet = 0;
		}
		// If there was a one before
		else if (wasOneBefore) {
			// Increment the current bitset
			++currentBitSet;
		}
	}

	return maxBitset;
}

int main() {
	int nbToTest = 2514;

	std::cout << "Max bitset: " << solution(nbToTest) << std::endl;

	return 0;
}