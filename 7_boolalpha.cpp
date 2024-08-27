#include<iostream>
using namespace std;

int main (){
    int num1 {1};
    int num2 {2};
    
    cout<<"bool alpha inactive : "<<(num1>=num2)<<endl;
    cout<<boolalpha<<"bool alpha active : "<<(num1<=num2)<<endl;
}