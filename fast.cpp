#include <iostream>

using namespace std;

double my_pow(double result, int numpow) {
	double temp = result;
	if (numpow > 0) for (int i = 1; i < numpow; i++) result *= temp;
	else if (numpow < 0) for (int i = 1; i < numpow; i++) result /= temp;
	else result = 1;
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