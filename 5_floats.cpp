#include<iostream>
#include<iomanip> // We need a iomanip library to define precision in deciaml points. By default it is set to 6 digits.
using namespace std;

int main(){
    
    float num1 {1.2345678901234567890f};    // float
    double num2 {1.2345678901234567890};     // double (default)
    long double num3 {1.2345678901234567890l}; // long double
    /*
    If we don't type suffic at the end of float 'f' then it is implicitly converted to a double
    */
    
    //Precision
    cout<<setprecision(20); // Control the precision from std::cout.
    cout<<"number1 is : "<<num1<<endl; //7 digits
    cout<<"number2 is : "<<num2<<endl; // 15'ish digits
    cout<<"number3 is : "<<num3<<endl; // 15+ digits
    
    //_______________________________________________________
    
    double number10{ -5.6 };
    double number11{};//Initialized to 0
    double number12{};  //Initialized to 0

    //Infinity
    double result { number10 / number11 };
    
    std::cout << number10 << "/" << number11 << " = " << result << std::endl;
    std::cout << result << " + " << number10 << " = " << result + number10 << std::endl;
    
    //NaN
    result = number11 / number12;
    
    
    std::cout << number11 << "/" << number12 << " = " << result << std::endl;    
    return 0;
}