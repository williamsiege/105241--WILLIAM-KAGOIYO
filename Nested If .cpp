// Learning Nested if operations
#include<iostream>
#include<string>

using namespace std;

int main()
{
string interest1,interest2;
int age;
cout << "Please enter the age of child:  ";
cin >> age;


if(age>=4 && age<=10){
    cout<< "Admit to the School"<<endl;
    
    cout << "PLease enter interests :";
    cin >> interest1,interest2;

    if(interest1 == "Soccer"){
        cout << "Assigned to Soccer Play Group"<<endl;
    }
    if(interest2 == "Art"){
        cout << "Assigned to art play group"<<endl;
    }else{
        cout << "Assign to other play groups"<<endl;
    }
}
else{
    cout <<"Decline!! , Do not admit age limit not met";
}

return 0;
} 
