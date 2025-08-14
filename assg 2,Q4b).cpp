#include <iostream>
using namespace std;
void reversestring(char str[], char str2[]){
	int i=0;
	int k=0;
	while (str[i] != '\0') {
        i++;
    }
    int j=i-1;
    while (j>=0){
    	str2[k]=str[j];
    	j--;
    	k++;
	}
	str2[k] = '\0'; 
}
int main()
{
	char str[20];
	char str2[20];
    cout << "Enter first string: ";
    cin >> str;  
    reversestring(str, str2);
    cout<<"reversedstring"<<" "<<str2;
}
