// learning conditional statemnets
#include<iostream>
using namespace std;

int main()
{

int age;
cout<< "Please enter the age of child:";
cin>> age;
 
 // Using If statement condition
if (age>=4){
    cout<< "Admit to the School"<<endl;

}
else{
    cout << "Declined !! , Minimum age not met"<<endl;
}

return 0;
}
