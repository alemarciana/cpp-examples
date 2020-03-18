#include <iostream>
#include <string>
using namespace std;
class Vehicle {
	private:
		int numberOfWheels;
		string color;
	public:
		Vehicle(){}
		Vehicle(string type){
			if ( type == "Car" ){
				numberOfWheels = 4;
			}
			else if ( type == "Bycicle" || type == "Motorcicle" ){
				numberOfWheels = 2;
			}
		}
		void setNumberOfWheels(int n) {
			numberOfWheels = n;
		}
		int getNumberOfWheels() {
			return numberOfWheels;
		}
};
int main() {
	Vehicle car1;
	car1.setNumberOfWheels(4);
	Vehicle car2 = Vehicle("Car");
	string vtype;
	cout << "Ingrese el tipo de vehiculo: ";
	cin >> vtype;
	Vehicle vehicle1 = Vehicle(vtype);
	cout << "El tipo de vehiculo ingresado tiene "<<vehicle1.getNumberOfWheels()<<" ruedas.\n";
	return 0;
}
