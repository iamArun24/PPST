//Roots of Quadratic Equation
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double a, b, c;
    double d, r1, r2, realPart, imagPart;

    cout << "Enter coefficients a, b and c: ";
    cin >> a >> b >> c;

    d = b*b - 4*a*c;   // Discriminant

    if (d > 0)
    {
        r1 = (-b + sqrt(d)) / (2*a);
        r2 = (-b - sqrt(d)) / (2*a);
        cout << "Roots are real and different." << endl;
        cout << "Root 1 = " << r1 << endl;
        cout << "Root 2 = " << r2 << endl;
    }
    else if (d == 0)
    {
        r1 = -b / (2*a);
        cout << "Roots are real and equal." << endl;
        cout << "Root = " << r1 << endl;
    }
    else
    {
        realPart = -b / (2*a);
        imagPart = sqrt(-d) / (2*a);
        cout << "Roots are complex." << endl;
        cout << "Root 1 = " << realPart << " + " << imagPart << "i" << endl;
        cout << "Root 2 = " << realPart << " - " << imagPart << "i" << endl;
    }

    return 0;
}
