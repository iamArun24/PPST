// Matrix Operations
#include <iostream>
using namespace std;

int main() {
    int a[10][10], b[10][10], r, c;

    cout << "Enter rows and columns: ";
    cin >> r >> c;

    // Input Matrix A
    cout << "Enter elements of Matrix A:\n";
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            cin >> a[i][j];
        }
    }

    // Input Matrix B
    cout << "Enter elements of Matrix B:\n";
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            cin >> b[i][j];
        }
    }

    // Addition
    cout << "\nAddition:\n";
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            cout << a[i][j] + b[i][j] << " ";
        }
        cout << endl;
    }

    // Subtraction
    cout << "\nSubtraction:\n";
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            cout << a[i][j] - b[i][j] << " ";
        }
        cout << endl;
    }

    // Transpose of Matrix A
    cout << "\nTranspose of Matrix A:\n";
    for(int i = 0; i < c; i++) {
        for(int j = 0; j < r; j++) {
            cout << a[j][i] << " ";
        }
        cout << endl;
    }

    // Diagonal elements of Matrix A
    if(r == c) {
        cout << "\nDiagonal elements of Matrix A:\n";
        for(int i = 0; i < r; i++) {
            cout << a[i][i] << " ";
        }
    } else {
        cout << "\nMatrix is not square, no diagonal elements!";
    }

    return 0;
}