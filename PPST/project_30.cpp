//Runtime Polymorphism (Function Overriding)
#include <iostream>
using namespace std;

class Animal {
public:
    virtual void sound() {  // Virtual function
        cout << "Animal makes a sound" << endl;
    }
};

class Dog : public Animal {
public:
    void sound() {  // Overriding
        cout << "Dog barks" << endl;
    }
};

class Cat : public Animal {
public:
    void sound() {
        cout << "Cat meows" << endl;
    }
};

int main() {
    Animal* a;  // Base class pointer

    Dog d;
    Cat c;

    a = &d;
    a->sound();  // Dog's sound

    a = &c;
    a->sound();  // Cat's sound

    return 0;
}