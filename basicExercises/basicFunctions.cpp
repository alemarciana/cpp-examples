#include <iostream>
#include <string>
using namespace std;
void printUpToNum(int num = 255){
	for (int i = 1; i <= num; i++){
		cout << i << endl;
	}
}
void printOddsToNum(int num = 255){
	for (int i = 1; i<=num; i+=2){
		cout << i << endl;
	}
}
void traverseArray(int arr[], int num){
	for (int i = 0; i < num; i++) {
		cout << arr[i] << endl;
	}
}
float* getMinMaxAvg(int arr[]){
	int arrSize = (sizeof(arr)/sizeof(*arr)), sum = 0, min = arr[0], max = arr[0];
	float farr[3];
	for (int i = 0; i < arrSize; i++) {
		sum += arr[i];
		if ( arr[i] < min ) {
			min = arr[i];
		}
		if ( arr[i] > max ) {
			max = arr[i];
		}
	}
	farr[0] = float (min);
	farr[1] = float (max);
	float avg = (sum/arrSize);
	farr[2] = avg;
	return farr;
}
int main(){
	// First Function
	printUpToNum(255);
	// Second Function
	printOddsToNum(255);
	// Third Function
	int num1 = 9;
	int arr1[] = {1,2,12,4,5,78,7,8,9};
	traverseArray(arr1,num1);
	// Fourth Function
	// Fifth Function
	int arr2[] = {2,10,12,-32,89,33};
	farr = getMinMaxAvg(arr2);
	for ( Object i : farr ) {
		cout << i << endl;
	}
}
