// Using the short hand if statement
#include<iostream>
#include<string>

using namespace std;

int main()
{
int age;
cout << "Please enter the age of child:  ";
cin >> age;

cout<<"\n\n";

string message = (age>=4)?"Admit to school for registration":"Age limit not met , DECLINE!!"; //short hand if with condition
cout <<message;

return 0;
}