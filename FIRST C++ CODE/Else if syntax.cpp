//Learning Else if 
#include<iostream>
#include<string>

using namespace std;

int main()
{
int age;
cout << "Please enter the age of child:  ";
cin >> age;
// Using else if syntax
if(age>= 7){
    cout << "Admit to Grade School"<<endl;
}else if (age>=5&& age<=6)
{
    cout << "Admit to Kindergarden"<<endl;/* code */
}else if (age>=3 && age<=4)
{
   cout << "Admit to preschool"<<endl; /* code */
}else if (age>=1 && age<=2)
{
   cout << "Admit to Play Group"<<endl; /* code */
}else{
    cout << "Reject admission"<<endl;
}

return 0;
}