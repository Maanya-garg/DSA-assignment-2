#include <iostream>
using namespace std;
void sortstring(char str[]){
    int i, j;
    char temp;
    for (i = 0; str[i] != '\0'; i++) {
        for (j = i + 1; str[j] != '\0'; j++) {
            if (str[i] > str[j]) {
                temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
}
int main(){
	char str[100];
    cout << "Enter a string: ";
    cin >> str; 
    sortstring(str);
    cout << "Sorted string: " << str << endl;
}
