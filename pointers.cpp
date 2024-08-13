#include <iostream>
using namespace std;

int main(){

    int clase=57;
    int *num; // declearing a pointer
    num = &clase;

    // '&' in eng: "address of"
    // '*' alone in eng: "variable pointed to by"
    // '* with int/char': type modifer to pointer
    int m = sizeof(num);

    cout<<m<<endl; // OP pointer num's value (addrss of clase)
    cout<<&clase<<endl; // OP pointer num's value (addrss of clase)
    cout<<num<<endl; // OP pointer num's value (addrss of clase)
    cout<<&num<<endl; // OP pointer num's itself addess
    cout<<*num<<endl; // pointer dereference with * | OP = 5
    return 0;
}
