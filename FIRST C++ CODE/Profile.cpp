// Learning string input in order to create a profile of myself

#include<iostream>
#include<string>
using namespace std;
 
 int main()
 {
string fullName,lastName,meal, movie, location;
// Simple Data Input using cin>>
cout << "Enter your Full Name: ";
getline(cin,fullName);
cout << "My Full Name is "<<fullName<< endl;
//
cout << "Enter your last Name: ";
getline(cin,lastName);
cout << "My Last Name is "<<lastName<< endl;
// Cin >> treats spaces as terminating characters
// Input Full Name : Kagoiyo Wabuiya
// Enter your Full Name : Kagoiyo
// to correct we use getline() syntax
cout << "Enter Favorite Meal: ";
getline(cin,meal);
cout << "Favourite Meal is :"<<meal<<endl;
//
cout << "Enter Place of Residence: ";
getline(cin,location);
cout <<"I live in : "<<location<<endl;
//
cout << "Favourite MovieS is :";
getline(cin,movie);
cout <<"My Favourite movies is :"<<movie<<endl;

return 0;
}

