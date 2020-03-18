#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void writeToFile(string name, string text){
	ofstream File(name);
	File << text << endl;
	File.close();
}
void readFile(string name){
	ifstream File(name);
	string Text;
	while (getline (File,Text)){
		cout << Text << endl;
	}
	File.close();
}

int main(){
	cout << "Desea leer o escribir un archivo?: ";
	string ans;
	cin >> ans;
	while (ans != "leer" && ans != "escribir"){
		cout << "Desea leer o escribir un archivo?: ";
		cin >> ans;
	}
	cout << "Ingrese el nombre del archivo: ";
	string file;
	cin >> file;
	if (ans == "leer"){
		readFile(file);
	}
	else{
		cout << "Ingrese la linea a escribir: ";
		string line;
		cin.ignore();
		getline(cin,line);
		writeToFile(file,line);
	}
	return 0;
}
