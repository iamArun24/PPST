//Vector Operation
#include <iostream>
#include <vector>
using namespace std;

class VectorOperations {
private:
    vector<int> v;

public:
    // Insert element
    void pushElement(int x) {
        v.push_back(x);
    }

    // Remove last element
    void popElement() {
        if (!v.empty()) {
            v.pop_back();
        } else {
            cout << "Vector is empty!\n";
        }
    }

    // Display vector
    void display() {
        cout << "Vector: ";
        for (int i : v) {
            cout << i << " ";
        }
        cout << endl;
    }

    // Get size
    void getSize() {
        cout << "Size: " << v.size() << endl;
    }

    // Access element
    void getElement(int index) {
        if (index >= 0 && index < v.size()) {
            cout << "Element at index " << index << ": " << v[index] << endl;
        } else {
            cout << "Invalid index!\n";
        }
    }

    // Clear vector
    void clearVector() {
        v.clear();
        cout << "Vector cleared!\n";
    }
};

int main() {
    VectorOperations obj;
    int choice, value, index;

    do {
        cout << "\n--- VECTOR MENU ---\n";
        cout << "1. Push Element\n";
        cout << "2. Pop Element\n";
        cout << "3. Display\n";
        cout << "4. Size\n";
        cout << "5. Get Element\n";
        cout << "6. Clear Vector\n";
        cout << "0. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value: ";
                cin >> value;
                obj.pushElement(value);
                break;

            case 2:
                obj.popElement();
                break;

            case 3:
                obj.display();
                break;

            case 4:
                obj.getSize();
                break;

            case 5:
                cout << "Enter index: ";
                cin >> index;
                obj.getElement(index);
                break;

            case 6:
                obj.clearVector();
                break;

            case 0:
                cout << "Exiting...\n";
                break;

            default:
                cout << "Invalid choice!\n";
        }

    } while (choice != 0);

    return 0;
}