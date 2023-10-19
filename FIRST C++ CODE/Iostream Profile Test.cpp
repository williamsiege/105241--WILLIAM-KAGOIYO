//Simple Iostream Test Program

#include <iostream>
using namespace std;
int main() 
{
string name;
int age;
string city;
string email;
cout << "........MY Profile......."<<endl;

cout << "Enter a Name:  ";
cin>> name;
cout << "Enter Age:  ";
cin >> age;
cout <<"Enter City:  ";
cin>>city;
cout << "Enter email address:  ";
cin>>email;

cout<< "My Name is "<<name<<" Age  is "<<age<<" , I Live in the city of "<<city<<" and my email is "<<email<<endl;
return 0;
}