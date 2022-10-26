#include <vector>
#include <iostream>
#include <algorithm>

using std::vector;
using namespace std;

int solution(vector<int>& A) {
    int found = -1;
    sort(A.begin(), A.end());

    // Compare by pair and iterate two by two
    for (size_t i = 1; i < A.size() - 1; i += 2) {
        // If the current number is different than the previous one,
        if (A[i] != A[i - 1]) {
            // it means than we found the non-paired number
            found = A[i - 1];

            break;
        }
    }
    // If all the numbers are paired together except the final number
    if (found == -1) {
        found = A[A.size() - 1];
    }

    return found;
}

int main() {
    vector<int> vector = { 3, 8, 21, 8, 7, 21, 3, 7, 12, 4, 12 };

    std::cout << "The non-paired number is " << solution(vector) << std::endl;

    return 0;
}