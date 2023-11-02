// Learning string input in order to create a profile of myself

#include<iostream>
#include<string>
using namespace std;
 
 int main()
 {
string fullName,lastName,meal, movie, location, birthday;
// Simple Data Input using getline()

//FULLNAME
cout << "Enter your Full Name: ";
getline(cin,fullName);

//LASTNAME
cout << "Enter your last Name: ";
getline(cin,lastName);
//

// Cin >> treats spaces as terminating characters.
// Input Full Name : Kagoiyo Wabuiya.
// Enter your Full Name : Kagoiyo , thus does not show full data entered.
// to correct we use getline() syntax.

//FAVOURITE MEAL
cout << "Enter Favourite Meal: ";
getline(cin,meal);

//Place of Residence
cout << "Enter Place of Residence: ";
getline(cin,location);

//Favourite Movies
cout << "Favourite Movies is :";
getline(cin,movie);

//Birthday
cout << "Enter your Date of Birth :";
getline(cin,birthday);


cout<< "\n\n";

cout << "My Full Name is "<<fullName<< endl;
cout << "My Last Name is "<<lastName<< endl;
cout << "Favourite Meal is :"<<meal<<endl;
cout << "I live in : "<<location<<endl;
cout << "My Favourite movies is :"<<movie<<endl;
cout << "My Birthday is :"<<birthday<<endl;

return 0;

}

