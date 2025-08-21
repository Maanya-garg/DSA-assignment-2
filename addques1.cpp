#include<iostream>
#include <cmath>
using namespace std;
int diff(int arr[],int n,int k){
	int i,j;
		int count=0;;
	for (i=0;i<n;i++){
		for (j=i+1;j<n;j++){
			if (abs(arr[i]-arr[j])==k){
				count=count+1;
			}
		}
	} return count;
}
int main(){
	int n;
	cout<<"enter size of arr";
	cin>>n;
	int k;
	cout<<"enter the diff, k";
	cin>>k;
	cout<<"enter elements of arr";
	int arr[n];
	int i;
	for (i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<"number of pairs"<<diff(arr,n,k);
}
