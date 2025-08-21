#include <iostream>
using namespace std;
bool isSubstring(char str[], char sub[]) {
    int n = 0, m = 0;
    while (str[n] != '\0') n++;
    while (sub[m] != '\0') m++;
    for (int i = 0; i <= n - m; i++) {
        int j = 0;
        while (j < m && str[i + j] == sub[j]) j++;
        if (j == m) return true;
    }
    return false;
}
int length(char s[]) {
    int i = 0;
    while (s[i] != '\0') i++;
    return i;
}
int main() {
    char s[105];
    cout << "Enter string: ";
    cin >> s;
    int n = length(s);
    for (int i = 1; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            char A[105], B[105], C[105];
            int a = 0, b = 0, c = 0;
            for (int k = 0; k < i; k++) A[a++] = s[k];
            A[a] = '\0';
            for (int k = i; k < j; k++) B[b++] = s[k];
            B[b] = '\0';
            for (int k = j; k < n; k++) C[c++] = s[k];
            C[c] = '\0';
            if ((isSubstring(B, A) && isSubstring(C, A)) ||
                (isSubstring(A, B) && isSubstring(C, B)) ||
                (isSubstring(A, C) && isSubstring(B, C))) {
                cout << "YES\n";
                return 0;
            }
        }
    }
    cout << "NO\n";
    return 0;
}
