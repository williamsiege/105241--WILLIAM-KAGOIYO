// Learning Data Types .
#include<iostream>

using namespace std;

int main()
{
    double myNum=15.5;
    int myNewNum=int(myNum);
    cout<<"New Number is "<<myNewNum<<endl;

    int myNewNum2 = int (myNum);

    char myChar;
    int myInt =45;
    float myfloat = 4.567;
    int myNum2;

    myChar = static_cast<char>(myInt); //int to char
    myNum2 = static_cast<int>(myfloat);// Float to Interger
    
    



    return 0;

}