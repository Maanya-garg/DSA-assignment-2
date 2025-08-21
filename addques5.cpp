#include<iostream>
using namespace std;
void newarr(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == 2) {
            for (int j = n - 1; j > i; j--) {
                arr[j] = arr[j - 1];
            }
            if (i + 1 < n) {
                arr[i + 1] = 2;
            }
            i++; 
        }
    }
}
int main() {
    int arr[] = {2, 0, 1, 2, 0, 1, 0};
    int n = sizeof(arr) / sizeof(arr[0]);
    newarr(arr, n);
    cout << "Array after duplicating 2s: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}
