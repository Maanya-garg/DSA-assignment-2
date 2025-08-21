#include <iostream>
using namespace std;
void sort(int arr[], int n) {
    int index = 0; 
    int temp;
    for (int i = 0; i < n; i++) {
        if (arr[i] == 0) {
            temp = arr[i];
            arr[i] = arr[index];
            arr[index] = temp;

            index++;
        }
    }
    for (int i = index; i < n; i++) {
        if (arr[i] == 1) {
            temp = arr[i];
            arr[i] = arr[index];
            arr[index] = temp;
            index++;
        }
    }
}
int main() {
    int arr[] = {2, 0, 1, 2, 0, 1, 0};
    int n = sizeof(arr)/sizeof(arr[0]);
    sort(arr, n);
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i];
    }
}
