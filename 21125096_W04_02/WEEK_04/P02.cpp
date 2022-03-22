// 21125096
// Đặng Minh Triết
// 21CTT1

// Test case 1
// Input: 5
// Output: 55

// Test case 2
// Input: 20
// Output: 2870

// Test case 3
// Input: 338
// Output: 12928669

#include <iostream>
using namespace std;

int main() {
	cout << "Calculate sum program" << endl;
	int n;
	int sum = 0;
	cin >> n;
	for (int i = 0; i <= n; i++) {
		sum += i*i;
	}
	cout << "S(" << n << ")" << " = " << sum;
	return 0;
}