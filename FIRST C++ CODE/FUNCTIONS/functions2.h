#include<iostream> // library declaration.
#include<string>

using namespace std;

double Division(double var1 , double var2 )
{
    return var1/var2;
}

double myTriangle(double base, double height){
    return 0.5*base*height;
}

string checkEven(int num){
    string result =  (num%2 == 0) ? "True":"False"; //short hand if else
    return result;
}

int arrayAddition(int number[]){
    //processing
    
}