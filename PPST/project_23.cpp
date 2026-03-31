//Area & Volume of Shapes
#include <iostream>
using namespace std;

class Shape {
public:
    void circle(float r) {
        cout << "Area of Circle = " << 3.14 * r * r;
    }

    void rectangle(float l, float b) {
        cout << "\nArea of Rectangle = " << l * b;
    }

    void sphere(float r) {
        cout << "\nVolume of Sphere = " << (4.0/3) * 3.14 * r * r * r;
    }
};

int main() {
    Shape s;
    float r, l, b;

    cout << "Enter radius: ";
    cin >> r;
    s.circle(r);

    cout << "\nEnter length & breadth: ";
    cin >> l >> b;
    s.rectangle(l, b);

    s.sphere(r);

    return 0;
}