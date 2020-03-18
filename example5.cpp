#include <iostream>
#include <string>
using namespace std;

int main() {
	char vowels[5] = {'a','e','i','o','u'};
	int len;
	cout << "Introduzca un número entero positivo: ";
	cin >> len;
	while ( len < 0 ) {
		cout << "Introduzca un número entero positivo: ";
		cin >> len;
	}
	string arr[len];
	for ( int i = 0; i < len; i++ ) {
		cout << "Introduzca una palabra: ";
		cin >> arr[i];
	}
	cout << arr;
	return 0;
}
