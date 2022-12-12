#include <iostream>

using namespace std;

double my_pow(double result, int numpow) {
	result = pow(result, numpow);
	return result;
}

int main() {
	double number;
	int deg;
	cout << "Enter a number and a degree" << endl;
	cin >> number;
	cin >> deg;
	cout << "Answer is: " << my_pow(number, deg) << endl;
	return 0;
}