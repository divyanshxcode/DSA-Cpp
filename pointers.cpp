#include <iostream>
using namespace std;

int main(){

    int clase=56;
    int *num; // declearing a pointer
    num = &clase;

    cout<<&clase<<endl; // OP pointer num's value (addrss of clase)
    cout<<num<<endl; // OP pointer num's value (addrss of clase)
    cout<<&num<<endl; // OP pointer num's itself addess
    cout<<*num<<endl; // pointer dereference with * | OP = 5
    return 0;
}