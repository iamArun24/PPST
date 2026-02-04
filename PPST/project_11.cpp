//Check Whether a Number is Prime
#include <iostream>
using namespace std;

int main() {
    int n;
    bool isPrime = true;

    cout << "Enter a number: ";
    cin >> n;

    if(n <= 1) isPrime = false;

    for(int i = 2; i <= n / 2; i++) {
        if(n % i == 0) {
            isPrime = false;
            break;
        }
    }

    if(isPrime)
        cout << "Prime number";
    else
        cout << "Not a prime number";

    return 0;
}
