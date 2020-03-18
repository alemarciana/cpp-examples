#include <iostream>
using namespace std;

int main() {
	cout << "Este programa recibirá un numero como entrada e imprimira todos los multiplos de el numero ingresado hasta 255: ";
	int num;
	cin >> num;
	for ( int i = 0; i <= 255; i++ ) {
		if ( i % num != 0 ) {
			continue;
		}
		cout << i << endl;
	}
}
