#include<iostream>
using namespace std;
void transpose (int mat[][3], int transposed[][3]) {
    int rows = mat[0][0];    
    int cols = mat[0][1];    
    int entries = mat[0][2];
    transposed[0][0] = cols;    
    transposed[0][1] = rows;    
    transposed[0][2] = entries;
int k = 1; 
    for (int i = 0; i < cols; i++) { 
        for (int j = 1; j <= entries; j++) {
            if (mat[j][1] == i) { 
                transposed[k][0] = mat[j][1]; 
                transposed[k][1] = mat[j][0]; 
                transposed[k][2] = mat[j][2]; 
                k++;
            }
        }
    }
cout << "Row  Col  Val\n";
    for (int l = 0; l <= entries; l++) {
        cout << transposed[l][0] << "    "
             << transposed[l][1] << "    "
             << transposed[l][2] << endl;
    }
}
int main() {
    int rows, columns, entries;
    int mat[100][3], transposed[100][3];
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> columns;
    cout << "Enter number of entries: ";
    cin >> entries;
    mat[0][0] = rows;
    mat[0][1] = columns;
    mat[0][2] = entries;
cout << "Enter entries (row col value):\n";
    for (int i = 1; i <= entries; i++) {
        cin >> mat[i][0] >> mat[i][1] >> mat[i][2];
    }
transpose(mat, transposed);
return 0;
}
