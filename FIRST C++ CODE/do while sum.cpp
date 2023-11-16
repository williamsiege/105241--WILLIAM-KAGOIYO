#include <iostream>
#include <string>
using namespace std;



int main()
{
// beginning program using do while loop to calculate sum of numbers between 20 and 25
cout << "A program to compute the sum of numbres between 20 and 25;"<<endl; 

int value1= 20 , sum = 0;

do
{
    /* code */ sum+=value1;  // same as sum = sum + value1.
    value1++;
} while (value1<=25);// continue as long as it is less than 25.
  
cout << " Sum of NUmbers from 20 to 25 is : "<<sum<<endl;
return 0;
}