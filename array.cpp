#include<iostream>
#include<list>
using namespace std;

int main(){

    int arr[4]={199,200,201,202};

    // Basic 'For' loop
    cout<<"OP Line 1 - ";
    for(int i=0;i<4;i++){
        cout<<&arr[i]<<" ";
    }
    cout<<endl;

    // Range base 'For' loop
    cout<<"OP Line 2 - ";
    for(int i:arr){
        cout<<i<<" ";
    }
    cout<<endl;

    /*
    The range-based for loop in C++ is a convenient syntax for iterating over all elements in a container (such as arrays, vectors, lists, etc.).

    for (int i:arr) | for (_decleration_:_container_)
    •	declaration: This is typically a variable that will hold each element of the container in turn.
	•	container: This is the container or range you are iterating over.

    •	int i: Declares an integer variable i that will take on the value of each element in arr during each iteration of the loop.
	•	arr: The array over which we are iterating.

    In a range-based for loop, the address of the loop variable (e.g., i) remains the same for each iteration because the variable is reused. Its value changes with each element of the container, but its address stays constant within the loop block.
    */

    cout<<"OP Line 3 - ";
    for(int &i:arr){
        cout<<&i<<" ";
    }
    cout<<endl;

    // Character String
    cout<<"OP Line 4 - ";
    char arr2[]={'a','b','0',0,'c','d'};
    cout<<arr2;

        cout<<endl;

    cout<<"OP Line 5 - ";
    char arr3[]="abh";
    for(int i=0;arr3[i]!=0;i++){
        cout<<arr3[i];
    }
    /*
    1.	Character Arrays:
	•	char arr2[] = {'a', 'b', '0', 0, 'c', 'd'};
	•	This initializes a character array arr2 with the characters 'a', 'b', '0', and 'c', 'd' but with a null terminator (0) placed in the array. The null terminator (0 or '\0') marks the end of the string. When cout << arr2 is used, it prints characters up to the null terminator. So, arr2 prints “ab0”.
	•	char arr3[] = "abh";
	•	This initializes a character array arr3 with the string "abh". The compiler automatically adds a null terminator ('\0') at the end, making the actual array content {'a', 'b', 'h', '\0'}.

    2.	Escape Sequence:
	•	'\0' (or 0) is the null terminator used to mark the end of a C-style string. It signals the end of the string to functions like cout that print strings.

    3.	Printing Whole String:
	•	cout << arr2;
	•	Prints the characters in arr2 up to the null terminator. In your case, it prints “ab0”.
	•	for (int i = 0; arr3[i] != 0; i++) { cout << arr3[i]; }
	•	This loop iterates over each character in arr3 until it encounters the null terminator (0). It prints each character individually. Since arr3 is initialized as "abh", it prints “abh”.

    */
    return 0;

}