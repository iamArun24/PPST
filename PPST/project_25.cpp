//Matrix Operations
#include <iostream>
using namespace std;

class Matrix {
public:
    int a[10][10], r, c;

    void input() {
        cout << "Enter rows and columns: ";
        cin >> r >> c;

        cout << "Enter elements:\n";
        for(int i=0;i<r;i++)
            for(int j=0;j<c;j++)
                cin >> a[i][j];
    }

    void add(Matrix m2) {
        cout << "Addition:\n";
        for(int i=0;i<r;i++) {
            for(int j=0;j<c;j++) {
                cout << a[i][j] + m2.a[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    Matrix m1, m2;
    m1.input();
    m2.input();
    m1.add(m2);
    return 0;
}