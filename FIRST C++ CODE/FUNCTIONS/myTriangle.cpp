#include<iostream> // library declaration for basic I/O operations.
#include<string>
#include "functions2.h"

using namespace std; // allows us to use names from the standard library directly.

int main(){
    double base,height; // declare variables to store user input.
    //Triangle 1 
  do{  cout<<"Enter values for Triangles are"<<endl;
     cout << "Enter the base of the triangle: ";
                cin >> base;
                cout << "Enter the height of the triangle: ";
                cin >> height;
                cout << "Area of the triangle is: " << myTriangle(base,height) <<endl;}
    while(base>0, height>0);
    

return 0;
}