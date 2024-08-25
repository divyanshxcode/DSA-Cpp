#include<iostream>
#include<iomanip> // We need a iomanip library to define precision in deciaml points. By default it is set to 6 digits.
using namespace std;

int main(){
    
    float num1 = 1.23456789012345f;    // float
    double num2 = 1.23456789012345;     // double (default)
    long double num3 = 1.23456789012345L; // long double
    /*
    If we don't type suffic at the end of float 'f' then it is implicitly converted to a double
    */
    
    cout<<num1<<endl; // Default precision 6 (7th is rounded)
    cout<<setprecision(16)<<num1<<endl;
    cout<<setprecision(16)<<num2<<endl;
    cout<<setprecision(16)<<num3<<endl;
    
    return 0;
}