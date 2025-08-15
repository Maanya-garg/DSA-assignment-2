#include<iostream>
using namespace std;
int missingnumber(int arr[],int n){
	int i;
	for(i=0;i<n-1;i++){ // n-1 as n is the range of numbers here and not the size of array, size of array is n-1
		if (arr[i]!=i+1){
			return i+1;
		}
	} return n; //if missing number is last 
}
int main(){
	int arr[5]={1,2,4,5,6};
	int n=6;
cout << "Missing number: " << missingnumber(arr, n);
}
