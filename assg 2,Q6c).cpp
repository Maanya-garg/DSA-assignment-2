#include <iostream>
using namespace std;
# define MAX 100
void multiplySparse(int A[][3], int B[][3], int result[][3]) {
    if (A[0][1] != B[0][0]) {
        cout << "multiplication not possible!\n";
        return;
    }
    int rowsA = A[0][0], colsA = A[0][1], nA = A[0][2];
    int rowsB = B[0][0], colsB = B[0][1], nB = B[0][2];
    result[0][0] = rowsA;
    result[0][1] = colsB;
    int k = 1;
    for (int i = 1; i <= nA; i++) {
        for (int j = 1; j <= nB; j++) {
            if (A[i][1] == B[j][0]) {
                int row = A[i][0];
                int col = B[j][1];
                int value = A[i][2] * B[j][2];
                int found = 0;
                for (int x = 1; x < k; x++) {
                    if (result[x][0] == row && result[x][1] == col) {
                        result[x][2] += value;
                        found = 1;
                        break;
                    }
                }
                if (!found) {
                    result[k][0] = row;
                    result[k][1] = col;
                    result[k][2] = value;
                    k++;
                }
            }
        }
    }
    result[0][2] = k - 1;}
void printSparse(int mat[][3]) {
    int n = mat[0][2];
    for (int i = 0; i <= n; i++) {
        cout << mat[i][0]<< mat[i][1] <<mat[i][2] << endl;
    }
}
int main() {
    int A[MAX][3], B[MAX][3], C[MAX][3];
    int rows, cols, nonZero;
    cout << "Enter rows, cols, and non-zero count for Matrix A: ";
    cin >> A[0][0] >> A[0][1] >> A[0][2];
    cout << "Enter triplet (row col value) for A:\n";
    for (int i = 1; i <= A[0][2]; i++) {
        cin >> A[i][0] >> A[i][1] >> A[i][2];
    }
    cout << "Enter rows, cols, and non-zero count for Matrix B: ";
    cin >> B[0][0] >> B[0][1] >> B[0][2];
    cout << "Enter triplet (row col value) for B:\n";
    for (int i = 1; i <= B[0][2]; i++) {
        cin >> B[i][0] >> B[i][1] >> B[i][2];
    }
    cout << "\nMatrix A (sparse form):\n";
    printSparse(A);
    cout << "\nMatrix B (sparse form):\n";
    printSparse(B);
    multiplySparse(A, B, C);
    cout << "\nResultant Matrix C (sparse form):\n";
    printSparse(C);
    return 0;
}

