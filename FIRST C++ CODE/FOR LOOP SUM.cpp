#include <iostream>
#include <string>
using namespace std;



int main()
{
// beginning program using do while loop to calculate sum of numbers between 20 and 25
cout << "A program to compute the sum of numbres between 20 and 25;"<<endl; 
int sum = 0;

for (int value1= 20 ;value1<=25; value1+=1)
{
    sum+=value1;
    
}
cout <<"The sum is: " <<sum<< endl ;
return 0;

}