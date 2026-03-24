#include <iostream>

using namespace std;

int main() {
	cout << "*********************** CALCULATOR ***********************" << endl;
	char O;
	double num1, num2, result;

	cout << "Enter operator (+,-,/,*): " << endl;
	cin >> O;
	cout << "Enter 1st number: " << endl;
	cin >> num1;
	cout << "Enter 2nd number: " << endl;
	cin >> num2;

	switch (O) {
	case '+':
		result = num1 + num2;
		cout << result << endl;
		break;

	case '-':
		result = num1 - num2;
		cout << result << endl;
		break;
	case '/':
		result = num1 / num2;
		cout << result << endl;
		break;
	case '*':
		result = num1 * num2;
		cout << result << endl;
		break;
	default:
		cout << "invalid input" << endl;
	}

	cout << "***********************************************" << endl;