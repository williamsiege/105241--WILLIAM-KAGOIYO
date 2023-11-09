#include <iostream>
#include <string>
using namespace std;



int main()
{
// beginning program
cout << "A program to compute the sum of numbres between 20 and 25;"<<endl;

int value1= 20 , sum = 0;
while (value1<=25)
{
    /* code */ sum = sum + value1;
    value1++;

}
cout << " Sum of NUmbers from 20 to 25 is : "<<sum<<endl;
return 0;
}