#include <iostream>
#include <string>
using namespace std;

int main() {
	int num;
	cout << "Introduzca un número entero entre 1 y 5: ";
	cin >> num;
	switch (num) {
		case 1:
			cout << "El numero introducido es 1\n";
			break;
		case 2:
			cout << "El numero introducido es 2\n";
			break;
		case 3:
			cout << "El numero introducido es 3\n";
			break;
		case 4:
			cout << "El numero introducido es 4\n";
			break;
		case 5:
			cout << "El numero introducido es 5\n";
			break;
		default:
			cout << "El numero introducido no es valido\n";
			break;
	}
}
