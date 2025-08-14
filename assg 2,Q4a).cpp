#include <iostream>
using namespace std;
void concatenate(char str1[], char str2[]) {
    int i = 0;
    while (str1[i] != '\0') {
        i++;
    }
int j = 0;
    while (str2[j] != '\0') {
        str1[i] = str2[j];
        i++;
        j++;
    }
str1[i] = '\0'; 
}
int main() {
    char str1[50];
    char str2[20];
    cout << "Enter first string: ";
    cin >> str1;  
    cout << "Enter second string: ";
    cin >> str2;
 concatenate(str1, str2);
cout << "Concatenated string: " << str1 << endl;
return 0;
}
