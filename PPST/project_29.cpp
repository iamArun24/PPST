//All Types of Inheritance + Abstract Class
#include <iostream>
using namespace std;

// Abstract Class
class Person {
public:
    virtual void display() = 0; // Pure virtual function
};

// Single Inheritance
class Student : public Person {
public:
    void display() {
        cout << "I am a Student" << endl;
    }
};

// Multilevel Inheritance
class Graduate : public Student {
public:
    void show() {
        cout << "I am a Graduate Student" << endl;
    }
};

// Multiple Inheritance
class Sports {
public:
    void sport() {
        cout << "I play sports" << endl;
    }
};

class Result : public Student, public Sports {
public:
    void result() {
        cout << "This is Result class (Multiple Inheritance)" << endl;
    }
};

// Hierarchical Inheritance
class Teacher : public Person {
public:
    void display() {
        cout << "I am a Teacher" << endl;
    }
};

// Hybrid Inheritance (Combination)
class Assistant : public Teacher {
public:
    void assist() {
        cout << "I assist the teacher" << endl;
    }
};

int main() {
    Student s;
    Graduate g;
    Result r;
    Teacher t;
    Assistant a;

    s.display();
    g.display();
    g.show();

    r.display();
    r.sport();
    r.result();

    t.display();

    a.display();
    a.assist();

    return 0;
}