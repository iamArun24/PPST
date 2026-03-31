//Complex Number Operations
#include <iostream>
using namespace std;

class Complex {
public:
    float r, i;

    void input() {
        cout << "Enter real and imaginary: ";
        cin >> r >> i;
    }

    void add(Complex c1, Complex c2) {
        cout << "Addition = " << (c1.r + c2.r) << " + " << (c1.i + c2.i) << "i";
    }
};

int main() {
    Complex c1, c2, c3;
    c1.input();
    c2.input();
    c3.add(c1, c2);
    return 0;
}