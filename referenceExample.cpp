#include <iostream>
#include <string>
using namespace std;

void modify(int &num){
	num = 15;
}
int main(){
	int a = 10;
	int &num1 = a;
	num1 = 20;
	modify(a);
	cout << a << endl;
	return 0;
}
