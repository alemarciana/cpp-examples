#include <iostream>
using namespace std;

void sum5(int &num){
	num += 5;
}
void sum5(int* &arr, int len){
	for (int i=0;i<len;i++){
		arr[i]+=5;
	}
}
int main(){
	int a = 10;
	sum5(a);
	cout << a << endl;
	int arr1[] = {10,20,30};
	int arrLen = (sizeof(arr1)/sizeof(*arr1));
	sum5(arr1,arrLen);
	cout << arr1 << endl;
	return 0;	
}
