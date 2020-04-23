#include <iostream>
#include <fstream>
#include <string>
void writeToFile(std::string name, std::string text){
	std::ofstream File;
	File.open(name, std::ios_base::app);
	File << text << std::endl;
	File.close();
}
void readFile(std::string name){
	std::ifstream File(name);
	std::string Text;
	while (getline (File,Text)){
		std::cout << Text << std::endl;
	}
	File.close();
}

int main(){
	std::cout << "Desea leer o escribir un archivo?: ";
	std::string ans;
	std::cin >> ans;
	while (ans != "leer" && ans != "escribir"){
		std::cout << "Desea leer o escribir un archivo?: ";
		std::cin >> ans;
	}
	std::cout << "Ingrese el nombre del archivo: ";
	std::string file;
	std::cin >> file;
	if (ans == "leer"){
		readFile(file);
	}
	else{
		std::cout << "Ingrese la linea a escribir: ";
		std::string line;
		std::cin.ignore();
		std::getline(std::cin,line);
		writeToFile(file,line);
	}
	return 0;
}
