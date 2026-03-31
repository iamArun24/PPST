// Complex Numbers using Operator Overloading
#include <iostream>
using namespace std;

class Complex {
public:
    float r, i;

    void input() {
        cout << "Enter real and imaginary: ";
        cin >> r >> i;
    }

    Complex operator+(Complex c) {
        Complex temp;
        temp.r = r + c.r;
        temp.i = i + c.i;
        return temp;
    }

    void display() {
        cout << r << " + " << i << "i";
    }
};

int main() {
    Complex c1, c2, c3;

    c1.input();
    c2.input();

    c3 = c1 + c2;

    cout << "Result = ";
    c3.display();

    return 0;
}