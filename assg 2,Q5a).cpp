#include<iostream>
using namespace std;
void diagonalmat(int a[],int n){
	int i,j;
	for(i=0;i<n;i++){
		for (j=0;j<n;j++){
			if (i==j){
				cout<<a[i];
			}
			else{
				cout<<0;
			}
		}cout<<endl;
	}
}
int main(){
	int i;
	int n;
	int a[n];
	cout<<"enter size of arr";
	cin>>n;
	cout<<"enter the elements";
	for (i=0;i<n;i++){
		cin>>a[i];
	}
	diagonalmat(a,n);
}
