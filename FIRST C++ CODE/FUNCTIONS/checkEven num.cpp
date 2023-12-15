#include<iostream> // library declaration for basic I/O operations.
#include<string>
#include "functions2.h"

using namespace std; 

int main()
{
char resp;
do
{
    cout<<"Enter Number to determine if its an Even Number"<<endl;
    int num;
    cin>>num;
    cout<< "is the Number even ?? "<<checkEven(num)<<endl;
    cout<<"Do you wish to continue ?? (Y or N)"<<endl;
    cin>>resp;

} while (resp == 'Y');


return 0;
}