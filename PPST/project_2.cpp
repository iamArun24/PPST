// Compound Interest Calculation
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double principal, rate, time, amount, CI;

    cout << "Enter principal: ";
    cin >> principal;

    cout << "Enter rate of interest (%): ";
    cin >> rate;

    cout << "Enter time (in years): ";
    cin >> time;

    amount = principal * pow((1 + rate/100), time);
    CI = amount - principal;

    cout << "Amount = " << amount << endl;
    cout << "Compound Interest = " << CI << endl;

    return 0;
}
