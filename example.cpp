#include <iostream>
#include <string>
using namespace std;

int main() {
	// Define constant "zero"
	const int zero = 0;
	// Yeah that was worthless
	// Define first two strings
	string str1 = "Hello World", str2 = "UwU";
	// Print previously defined variables
	cout << str1 << " " << str2 << endl;
	// Concatenate previously defined strings and the print them
	string fullstr1 = str1 + ' ' + str2;
	cout << fullstr1 << endl;
	// OR we could use .append()
	string fullstr2 = str1.append(' '+str2);
	cout << fullstr2 << endl;
	// Do something else, mmm
	int num;
	cout << "Introduzca un numero: ";
	cin >> num;
	cout << "El numero introducido es: " << num << endl;
	return 0;
}
