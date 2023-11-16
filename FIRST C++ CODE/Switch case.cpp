// Learning Switch Case Conditions
#include<iostream>
#include<string>

using namespace std;

int main()
{
int opt; //Declaring switch variable......
cout <<"Hi . This is your BBIT Timetable(Sep - DEC 2023)"<<endl;
cout <<"Please choose between Monday, Tuesday, Wednesday,Thursday, Friday";// telling user to choose a day to view
cout << "Days are represented from numbers 1 to 5 (1-5)";

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
       cout << "Tuesday Classes\n.................\n" ;
       cout << "\t1. BBIT1012: Analog electronics 2"<<endl;
       cout << "\t2. BBIT1107: Fundamentals of Business 2"<<endl;
       cout << "\t. BBIT1110: Theology"<<endl;
    break;//directs Compiler to stop execution and jump to the next case
case 3:
       cout << "Wednesday Classes\n.................\n" ;
       cout << "\t1. BBIT1010: Physical electronics 2"<<endl;
       cout << "\t2. BBIT1015: Fundamentals of biology"<<endl;
       cout << "\t3. BBIT1110: Discrete Mathematics"<<endl;
    break;//directs Compiler to stop execution and jump to the next case
case 4:
       cout << "Thursday Classes\n.................\n" ;
       cout << "\t1. BBIT1009: Physical electronics"<<endl;
       cout << "\t2. BBIT1108: Fundamentals of computers"<<endl;
       cout << "\t3. BBIT1120: Ideology"<<endl;
    break;//directs Compiler to stop execution and jump to the next case
case 5:
       cout << "Friday Classes\n.................\n" ;
       cout << "\t1. BBIT1112: Maths for engineering"<<endl;
       cout << "\t2. BBIT1104: Physics"<<endl;
       cout << "\t3. BBIT1119: Masters Theology"<<endl;
    break;//directs Compiler to stop execution and jump to the next case
default :
       cout << "No other lesson, Not picked appropraite Day (1-5)"<<endl;
}


return 0;
}