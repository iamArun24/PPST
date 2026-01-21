// Add, Subtraction, Multiplication, Division, Remainder;
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
    cout<<"Addition;"<<a+b<<endl;
    cout<<"Subtraction;"<<a-b<<endl;
    cout<<"Multiplication;"<<a*b<<endl;
    cout<<"Division;"<<a/b<<endl;
    cout<<"Remainder;"<<fmod(a,b)<<endl;

return 0;
}