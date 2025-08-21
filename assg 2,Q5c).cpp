#include<iostream>
using namespace std;
void uppertriangularmat(int a[],int n){
	int i,j;
	int k=0;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {{
            if (i<=j){
                cout << a[k++];}
            else{
                cout << 0;
        }}}
        cout << endl;
    }
}
int main(){
	int i;
	int n;
		cout<<"enter size of mat";
	cin>>n;
	
	int a[(n*(n+1))/2];
	cout<<"enter the elements";
		for (i=0;i<(n*(n+1)/2);i++){
		cin>>a[i];
	}
	uppertriangularmat(a,n);
}
