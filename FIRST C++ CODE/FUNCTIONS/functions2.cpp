#include<iostream> // library declaration for basic I/O operations.
#include<string>
#include "functions2.h"

using namespace std; // allows us to use names from the standard library directly.

int main(){
    double var1,var2; // declare variables to store user input.

    cout<<"Enter the two numbers to see their division"<<endl; // display prompt to the user.
    cout<< "Enter value 1 "<<endl;
    cin>>var1; // read the first value from the user.
    cout<< "enter value 2 "<<endl;
    cin >> var2; // read the second value from the user.

    // calculate the division and display the result.
    cout<< "The division of "<<var1<<" and "<<var2<<" is "<<Division(var1,var2)<<endl;

    return 0; // indicates successful execution of the program.
}