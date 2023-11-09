#include <iostream>
#include <string>
using namespace std;
// writing a C++ program that counts the number of times a wrong password is entered;


int main()
{
string passWord = "WKAGO";
int count = 4;
cout << "Enter your password: ";
cin >> passWord;

while (count<=4)
{
    cout << "Please enter the correct password:";
    cin >> passWord;
}
return 0;
}