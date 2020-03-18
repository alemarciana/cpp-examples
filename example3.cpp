#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
	cout << "Este programa detectará si un número ingresado es par o impar\n";
	int num1;
	cout << "Introduzca un número: ";
	cin >> num1;
	if ( num1 & 2 == 0 ) {
		cout << "El número ingresado es par";
	}
	else {
		cout << "El número ingresado es impar\n";
	}
	// Do that again, but with ternary operator
	string result = ( num1 & 2 == 0 ) ? "par" : "impar";
	cout << "El número ingresado es " << result << endl;
}
