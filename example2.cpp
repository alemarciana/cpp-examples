#include <iostream>
#include <string>
using namespace std;

int main() {
	string str1, str2;
	int strlen1;
	cout << "Introduzca una palabra: ";
	cin >> str1;
	strlen1 = str1.length();
	cout << "La longitud de la palabra introducida es: " << strlen1 << endl;
	cout << "La primera letra de la palabra es: " << str1[0] << endl;
	cout << "La ultima letra de la palabra es: " << str1[str1.length()-1] << endl;
	// Get line from cin using getline
	cout << "Introduzca una frase" << endl;
	cin.ignore();
	getline (cin,str2);
	cout << "La frase introducida es: " << str2 << endl;
	return 0;
}
