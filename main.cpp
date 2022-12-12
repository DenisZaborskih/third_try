#include <iostream>

using namespace std;

double my_pow(double result, unsigned int numpow) {
	return pow(result, numpow);
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