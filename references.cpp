#include<iostream>
using namespace std;

int main(){
    int a=10;
    int &b=a;
    int *c=&a;

    cout<<a<<endl;
    cout<<&a<<endl;
    cout<<b<<endl;
    cout<<&b<<endl;
cout<<endl;

    b=40;
    cout<<a<<endl;
    cout<<&a<<endl;
    cout<<b<<endl;
    cout<<&b<<endl;
cout<<endl;
    *c=99;
    cout<<a<<endl;
    cout<<&a<<endl;
    cout<<b<<endl;
    cout<<&b<<endl;
    
    /*
    1. int &b = a;

	•	Purpose: Creates a reference b to the variable a.
	•	Functionality: b is an alias for a. Any changes to b affect a directly.
	•	Memory: b does not have its own memory; it shares the memory location of a.

2. int *c = &a;

	•	Purpose: Creates a pointer c that holds the address of a.
	•	Functionality: c stores the memory address of a. You can use c to access or modify a indirectly by dereferencing c (*c).
	•	Memory: c has its own memory location to store the address of a.
    
    Difference
    •	Reference (int &b):
        •	Type: Reference to an int.
        •	Usage: Acts as another name for the variable a.
        •	Dereferencing: No explicit dereferencing needed; b can be used like a.
	•	Pointer (int *c):
        •	Type: Pointer to an int.
        •	Usage: Holds the address of a, allowing you to indirectly access or modify a.
        •	Dereferencing: Requires explicit dereferencing (*c) to access the value of a.
    */
   
}