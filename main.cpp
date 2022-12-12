#include <iostream>

using namespace std;

double my_pow(double result, unsigned int numpow) {
	double temp = result;
	for (int i = 1; i < numpow; i++) result *= temp;
	return result;
}

int main() {
	double number;
	unsigned int deg;
	cout << "Enter a number and a degree" << endl;
	cin >> number;
	cin >> deg;
	cout << "Answer is: " << my_pow(number, deg) << endl;
	return 0;
}