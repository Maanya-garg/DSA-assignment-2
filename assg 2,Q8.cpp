#include<iostream>
using namespace std;
int duplicate(int arr[],int n){
	int i,j,k;
	int count=n;
	for(i=0;i<n;i++){
		for (j=i+1;j<n;j++){
			if (arr[i]==arr[j]){
		count=count-1;
		}
	}
} return count;}
int main(){
	int n;
	cout<<"enter size of arr";
	cin>>n;
	cout<<"enter elements of arr";
	int arr[n];
	int i;
	for (i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<"number of distinct elements are"<<duplicate(arr,n);
}
