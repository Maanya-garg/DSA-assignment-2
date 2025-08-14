#include<iostream>
using namespace std;
int binarysearch(int arr[],int n,int key){
	int low=0;
	int high=n-1;
	int ans=-1;
	int mid=(low+high)/2;
	while (low<=high){
	if (arr[mid]>key){
		high=mid-1;
	}
	else if (arr[mid]==key){
		return mid;
	} 
	else {
		low=mid+1;
	}
	mid=(low+high)/2;
} return ans;}
int main(){
	int arr[5]={1,2,3,6,8};
	int n=5;
	int key=2;
	cout<< "element found at"<<binarysearch(arr,5,2);
}
