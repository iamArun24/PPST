//Mini Project – Database Management (Using Runtime Polymorphism)
#include <iostream>
#include <vector>
using namespace std;

// Base class
class Database {
public:
    virtual void operation() = 0;
};

// Insert operation
class Insert : public Database {
public:
    void operation() {
        cout << "Data Inserted Successfully!" << endl;
    }
};

// Update operation
class Update : public Database {
public:
    void operation() {
        cout << "Data Updated Successfully!" << endl;
    }
};

// Delete operation
class Delete : public Database {
public:
    void operation() {
        cout << "Data Deleted Successfully!" << endl;
    }
};

// View operation
class View : public Database {
public:
    void operation() {
        cout << "Displaying Data..." << endl;
    }
};

int main() {
    int choice;
    Database* db;

    while (true) {
        cout << "\n--- DATABASE MENU ---\n";
        cout << "1. Insert\n2. Update\n3. Delete\n4. View\n5. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                db = new Insert();
                break;
            case 2:
                db = new Update();
                break;
            case 3:
                db = new Delete();
                break;
            case 4:
                db = new View();
                break;
            case 5:
                exit(0);
            default:
                cout << "Invalid choice!\n";
                continue;
        }

        db->operation();  // Runtime polymorphism
        delete db;
    }

    return 0;
}