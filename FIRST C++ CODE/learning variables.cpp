// Learning Variables, Declaration, initialization, functions
#include <iostream>
#include <string>
using namespace std;

// Global Variables declaration and initialization
int globalVariable = 30;
const int age =25; 

//Constant Global variable , value will not change, Values that never change unless through special circumstances

void myFunction()
{

// Function Codeblock
// Local variable declarations and initialization

int localVar1 = 10, localVar2 =12;
string localString1 = "LOCAL STRING 1" , localString2 ="Local String 2";

cout << "Local Variable 1 = "<<localVar1<<endl;
}

// Creating Second Function

void addAndDisplay(int value1, int value2 )// A function to add and display values
{
     int sum = value1 + value2; // Sum of the Local Variables within the function
     cout<< "Sum of  "<<value1<<" and "<<value2<<" is "<<sum<<endl;
   
}

int main()
{
    //Change Variable Value Of Global Variable
globalVariable =50;

    // Main Function Code Block

cout << "Global Variable Value = "<<globalVariable<<endl;
cout << "Global Variable Age = "<<age<<endl;

// How to output localVar1 using a function

myFunction();
addAndDisplay(10,15);

return 0;
}