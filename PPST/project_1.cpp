#include <iostream> 
#include <cmath>
using namespace std;

int main(){
    double a;
    double b;
    cout<< "Enter the number a;";
    cin>>a;
    cout<< "Enter the number b;";
    cin>>b;

// Add, Substraction, Multiplication, Division, Remainder;
    
    cout<<a+b<<endl;
    cout<<a-b<<endl;
    cout<<a*b<<endl;
    cout<<a/b<<endl;
    cout<<fmod(a,b)<<endl;

return 0;
}