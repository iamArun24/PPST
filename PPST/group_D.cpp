#include <iostream>
#include<string>
#include<cstring>
using namespace std;

// Traverse string
void traverse(string str)
{
    cout << "Characters of string:\n";
    for(int i = 0; i < str.length(); i++)
    {
        cout << str[i] << " ";
    }
    cout << endl;
}

// Find length
void length(string str)
{
    cout << "Length of string: " << str.length() << endl;
}

// Concatenate strings
void concatenate(string s1, string s2)
{
    string result = s1 + s2;
    cout << "Concatenated String: " << result << endl;
}

// Substring
void substring(string str, int start, int len)
{
    cout << "Substring: " << str.substr(start, len) << endl;
}

// Reverse string
void reverse(string str)
{
    string rev = "";
    for(int i = str.length() - 1; i >= 0; i--)
    {
        rev += str[i];
    }
    cout << "Reversed String: " << rev << endl;
}

int main()
{
    int choice;
    string str1, str2;
    int start, len;

    do
    {
        cout << "\n--- STRING OPERATIONS MENU ---\n";
        cout << "1. Traverse String\n";
        cout << "2. Find Length\n";
        cout << "3. Concatenate Strings\n";
        cout << "4. Substring\n";
        cout << "5. Reverse String\n";
        cout << "6. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;
        cin.ignore();   // clear newline from buffer

        switch(choice)
        {
            case 1:
                cout << "Enter string: ";
                getline(cin, str1);
                traverse(str1);
                break;

            case 2:
                cout << "Enter string: ";
                getline(cin, str1);
                length(str1);
                break;

            case 3:
                cout << "Enter first string: ";
                getline(cin, str1);
                cout << "Enter second string: ";
                getline(cin, str2);
                concatenate(str1, str2);
                break;

            case 4:
                cout << "Enter string: ";
                getline(cin, str1);
                cout << "Enter start index: ";
                cin >> start;
                cout << "Enter length: ";
                cin >> len;
                cin.ignore();
                substring(str1, start, len);
                break;

            case 5:
                cout << "Enter string: ";
                getline(cin, str1);
                reverse(str1);
                break;

            case 6:
                cout << "Exiting program...\n";
                break;

            default:
                cout << "Invalid choice!\n";
        }

    } while(choice != 6);

    return 0;
}