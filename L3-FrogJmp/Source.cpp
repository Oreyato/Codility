#include <iostream>

int solution(int X, int Y, int D) {
	int solution = 0;

	// If the division outputs a round number
	if (((Y - X) % D) == 0) {
		solution = (Y - X) / D;
	}
	// Otherwise add one to the division result
	else {
		solution = ((Y - X) / D) + 1;
	}

	return solution;
}

int main() {
	int startingPos{ 15 }; 
	int objectivePos{ 120 };
	int jumpDistance{ 20 };

	int jumpNb = solution(startingPos, objectivePos, jumpDistance);

	std::cout << "The frog needs to do at least " << jumpNb << " jumps to cover the distance.";

	return 0;
}