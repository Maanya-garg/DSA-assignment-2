#include<iostream>
using namespace std;
int missingnumber(int arr[],int n){
	int i;
	int s=0;
	int e=n-2;
	int mid=(e+s)/2;
	for(i=0;i<n-1;i++){ 
	 while (s<=e){
	 	if (arr[mid]!=mid+1){
	 		return mid+1;
		 }
		 else if( arr[mid]<(mid+1)){
		 	s=mid+1;
		 }
		 else {
		 	e=mid-1;
		 }
		 mid=(e+s)/2;
	 }
	} return n; 
}
int main(){
	int arr[5]={1,2,4,5,6};
	int n=6;
cout << "Missing number: " << missingnumber(arr, n);
}
