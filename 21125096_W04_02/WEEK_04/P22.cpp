// 21125096
// Đặng Minh Triết
// 21CTT1

// Test case 1
// Input: 6
// Output: 36

// Test case 2
// Input: 15
// Output: 225

// Test case 3
// Input: 7
// Output: 7
#include <iostream>
using namespace std;

int main() {
	int n;
	int P = 1;
	cout << "Tich uoc so" << endl;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		if (n % i == 0) {
			P *= i;
		}
	}
	cout << P;
	return 0;
}