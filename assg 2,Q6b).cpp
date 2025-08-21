#include<iostream>
using namespace std;
void add(int mat1[][3], int mat2[][3], int sum[][3]) {
    int i=1, j=1, k=1;
    int entries1 = mat1[0][2];
    int entries2 = mat2[0][2];
sum[0][0] = mat1[0][0];   
    sum[0][1] = mat1[0][1];   
    sum[0][2] = 0;            
    while (i <= entries1 && j <= entries2) {
        if (mat1[i][0] == mat2[j][0] && mat1[i][1] == mat2[j][1]) {
            sum[k][0] = mat1[i][0];
            sum[k][1] = mat1[i][1];
            sum[k][2] = mat1[i][2] + mat2[j][2];
            i++; j++; k++;
    }
        else if ((mat1[i][0] < mat2[j][0]) ||
                (mat1[i][0] == mat2[j][0] && mat1[i][1] < mat2[j][1])) {
            sum[k][0] = mat1[i][0];
            sum[k][1] = mat1[i][1];
            sum[k][2] = mat1[i][2];
            i++; k++;
        }
        else {
            sum[k][0] = mat2[j][0];
            sum[k][1] = mat2[j][1];
            sum[k][2] = mat2[j][2];
            j++; k++;
        }
    } //upcoming while loops for the extra non zero entries if any in any of the matrices
    while (i <= entries1) { 
        sum[k][0] = mat1[i][0];
        sum[k][1] = mat1[i][1];
        sum[k][2] = mat1[i][2];
        i++; k++;
    }
    while (j <= entries2) {
        sum[k][0] = mat2[j][0];
        sum[k][1] = mat2[j][1];
        sum[k][2] = mat2[j][2];
        j++; k++;
    }
    sum[0][2] = k-1;   //k-1 as k=0 is reserved for writing number of rows,columns etc
    cout << "Row  Col  Val\n";
    int l;
    for (l = 0; l <k; l++) {
        cout << sum[l][0] << "    "
             << sum[l][1] << "    "
             << sum[l][2] << endl;
    }
}
int main() {
    int rows, columns, entries,i,j,k;
    int mat1[100][3], mat2[100][3];
    int sum[100][3];
    cout << "Enter number of rows:";
    cin >> rows1;
    cout << "Enter number of columns: ";
    cin >> columns1;
    cout << "Enter number of entries for matrix 1 and matrix 2 respectively: ";
    cin >> entries1>>entries2; 
    mat1[0][0] = rows;
    mat1[0][1] = columns;
    mat1[0][2] = entries;
cout << "Enter entries of first matrix (row col value):\n";
    for (i = 1; i <= entries1; i++) {
        cin >> mat1[i][0] >> mat1[i][1] >> mat1[i][2];
    }
    mat2[0][0] = rows;
    mat2[0][1] = columns;
    mat2[0][2] = entries1;
cout << "Enter entries of second matrix (row col value):\n";
    for (j = 1; j <= entries2; j++) {
        cin >> mat2[j][0] >> mat2[j][1] >> mat2[j][2];
    }
add(mat1,mat2,sum);
return 0;
}
