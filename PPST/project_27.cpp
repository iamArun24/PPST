// String Operations
#include <iostream>
#include <cstring>
using namespace std;

class MyString {
public:
    char str[100];

    void input() {
        cout << "Enter string: ";
        cin >> str;
    }

    void length() {
        cout << "Length = " << strlen(str);
    }

    void reverse() {
        strrev(str);
        cout << "\nReverse = " << str;
    }
};

int main() {
    MyString s;
    s.input();
    s.length();
    s.reverse();
    return 0;
}