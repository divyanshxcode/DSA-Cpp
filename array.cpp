#include<iostream>
using namespace std;

int main(){
    int arr[4]={99,2,3,4};
    for(int i=0;i<4;i++){
        cout<<&arr[i]<<" ";
    }
    cout<<"\n"<<arr<<"\n"; // Address of array's head
    cout<<&arr<<"\n"; // Address of array's head

    int *p2_arr;
    p2_arr=arr;

    cout<<"\n"<<p2_arr<<"\n"; // Value of p2_arr
    cout<<&p2_arr<<"\n"; // address of p2_arr
    cout<<*p2_arr<<"\n"; //

}