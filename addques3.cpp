#include <iostream>
using namespace std;
bool areAnagrams(char str1[], char str2[]) {
    int count1[128] = {0};
    int count2[128] = {0};
    for (int i = 0; str1[i] != '\0'; i++) {
        count1[(int)str1[i]]++;
    }
    for (int i = 0; str2[i] != '\0'; i++) {
        count2[(int)str2[i]]++;
    }
    for (int i = 0; i < 128; i++) {
        if (count1[i] != count2[i]) {
            return false;
        }
    }
    return true;
}
int main() {
    char str1[100], str2[100];
    cout << "Enter first string: ";
    cin >> str1;
    cout << "Enter second string: ";
    cin >> str2;
    int len1 = 0, len2 = 0;
    while (str1[len1] != '\0') len1++;
    while (str2[len2] != '\0') len2++;
    if (len1 != len2) {
        cout << "No, they are NOT Anagrams.\n";
    }
    else {
        if (areAnagrams(str1, str2)) {
            cout << "Yes, they are Anagrams.";
        } else {
            cout << "No, they are NOT Anagrams.";
        }
    }
}
