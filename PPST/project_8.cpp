//Area of Circle, Equilateral Triangle, Rectangle, Square, Volume of Cube, Volume of Cylinder
#include <iostream>
using namespace std;

int main() {
    int choice;
    double r, a, b, h;
    const double PI = 3.141592653589793;

    cout << "Menu:\n";
    cout << "1. Area of Circle\n";
    cout << "2. Area of Equilateral Triangle\n";
    cout << "3. Area of Rectangle\n";
    cout << "4. Area of Square\n";
    cout << "5. Volume of Cube\n";
    cout << "6. Volume of Cylinder\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Enter radius: ";
            cin >> r;
            cout << "Area of Circle = " << PI * r * r;
            break;

        case 2:
            cout << "Enter side of equilateral triangle: ";
            cin >> a;
            cout << "Area of Equilateral Triangle = " << (1.732 * a * a) / 4;
            break;

        case 3:
            cout << "Enter length and breadth: ";
            cin >> a >> b;
            cout << "Area of Rectangle = " << a * b;
            break;

        case 4:
            cout << "Enter side of square: ";
            cin >> a;
            cout << "Area of Square = " << a * a;
            break;

        case 5:
            cout << "Enter side of cube: ";
            cin >> a;
            cout << "Volume of Cube = " << a * a * a;
            break;

        case 6:
            cout << "Enter radius and height: ";
            cin >> r >> h;
            cout << "Volume of Cylinder = " << PI * r * r * h;
            break;

        default:
            cout << "Invalid choice!";
    }

    return 0;
}
