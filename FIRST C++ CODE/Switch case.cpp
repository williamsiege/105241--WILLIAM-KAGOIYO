// Learning Switch Case Conditions
#include<iostream>
#include<string>

using namespace std;

int main()
{
int opt; //Declaring switch variable......
cout <<"Hi . This is your BBIT Timetable(Sep - DEC 2023)"<<endl;
cout <<"Please choose between Monday, Tuesday, Wednesday,Thursday, Friday";// telling user to choose a day to view
cout << "Days are represented from numbers 1 to 5";

cin >> opt;

switch (opt)
{
case 1:
       cout << "Monday Classes\n.................\n" ;
       cout << "\t1. BBIT1106: Maths for Business"<<endl;
       cout << "\t2. BBIT1102: Fundamentals of economics"<<endl;
       cout << "\t1. BBIT1110: Theology"<<endl;
    break;//directs Compiler to stop execution and jump to the next case
case 2:
       cout << "Monday Classes\n.................\n" ;
       cout << "\t1. BBIT1106: Maths for Business"<<endl;
       cout << "\t2. BBIT1102: Fundamentals of economics"<<endl;
       cout << "\t1. BBIT1110: Theology"<<endl;
    break;//directs Compiler to stop execution and jump to the next case
case 3:
       cout << "Monday Classes\n.................\n" ;
       cout << "\t1. BBIT1106: Maths for Business"<<endl;
       cout << "\t2. BBIT1102: Fundamentals of economics"<<endl;
       cout << "\t1. BBIT1110: Theology"<<endl;
    break;//directs Compiler to stop execution and jump to the next case
case 4:
       cout << "Monday Classes\n.................\n" ;
       cout << "\t1. BBIT1106: Maths for Business"<<endl;
       cout << "\t2. BBIT1102: Fundamentals of economics"<<endl;
       cout << "\t1. BBIT1110: Theology"<<endl;
    break;//directs Compiler to stop execution and jump to the next case
case 5:
       cout << "Monday Classes\n.................\n" ;
       cout << "\t1. BBIT1106: Maths for Business"<<endl;
       cout << "\t2. BBIT1102: Fundamentals of economics"<<endl;
       cout << "\t1. BBIT1110: Theology"<<endl;
    break;//directs Compiler to stop execution and jump to the next case
}


return 0;
}