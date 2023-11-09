#include <iostream>
#include <string>
using namespace std;



int main()
{
// beginning program using do while loop to calculate sum of numbers between 20 and 25
cout << "A program to compute the sum of numbres between 20 and 25;"<<endl; 

int value1,sum;

do
{  

cout << "Enter Value 1"<<endl;
cin >> value1;

sum = sum + value1;
    
} while (value1!=0);// continue as long as value 1 and 2 is not zero(0).
  
cout << " Sum of NUmbers from value 1  : "<<sum<<endl;
return 0;
}