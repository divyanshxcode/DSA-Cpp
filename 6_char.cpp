#include<iostream>

using namespace std;

int main(){
    
    char char1 {'A'};
    
    cout<<char1<<endl;
    cout<<static_cast<int>(char1)<<endl;
    /*
     static_cast<int>(char1) temporarily converts the char to an int for the purpose of printing or calculations, but it does not change the actual storage of char1.
    */
    char1 = 'B';
    cout<<char1<<endl;
    
    unsigned int num2;
    num2 = -4294967294;
    cout<<num2; // Output is 2 as largest unsinged int is 4,294,967,295 and it goes round and round
    return 0;
}