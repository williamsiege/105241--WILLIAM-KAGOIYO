// learning For loop
#include <iostream>
#include <string>
using namespace std;


int main()
{
// A simple program using for loop to increment number by 2 ;
cout <<"A simple program to output btw 12 and 28 on the screen"<<endl;
cout << " Using A For loop:\n";
for (int i=12;i<=28;i+=2) 
{
    cout << i << ","; // loop will run until number reaches 28 
}
return 0;
}