#include <iostream>
using namespace std;
void uppercasetolowercase(char str[]) {
    int i = 0;
    while (str[i] != '\0') {
        char ch = str[i];
        if (65<=(int)ch<=90 ){
            str[i] = ch + 32; 
        }
        i++;
    }
}

int main() {
    char str[100];
    cout << "Enter a string: ";
    cin >> str; 
    uppercasetolowercase(str);
    cout << "String: " << str << endl;
}
