//Vector Operations
#include <iostream>
using namespace std;

class Vector {
public:
    int a[10], n;

    void input() {
        cout << "Enter size: ";
        cin >> n;

        cout << "Enter elements:\n";
        for(int i=0;i<n;i++)
            cin >> a[i];
    }

    void add(Vector v2) {
        cout << "Vector Addition:\n";
        for(int i=0;i<n;i++)
            cout << a[i] + v2.a[i] << " ";
    }
};

int main() {
    Vector v1, v2;

    v1.input();
    v2.input();

    v1.add(v2);

    return 0;
}