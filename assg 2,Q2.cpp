#include<iostream>
using namespace std;
void swaparray(int&a,int&b){
	int temp;
		temp=a;
			a=b;
			b=temp;
}
void printarray(int arr[], int n) {
	int i;
	for (int i=0; i<n; i++){
		cout<< arr[i]<< " ";
	} cout <<endl;
}
void bubblesort(int arr[],int n){
	int i,temp,j;
	for(i=1;i<n;i++){
		bool swapped=false;
		for(j=0;j<n-i;j++){
		if(arr[j+1]<arr[j]){
		swaparray(arr[j],arr[j+1]);
		swapped=true;
		}}
		if (swapped==false){
		break;
	}
	} 
	printarray(arr,7);
}
int main (){
	int arr[7]={64,34,25,12,22,11,90};
	bubblesort(arr,7);
}
