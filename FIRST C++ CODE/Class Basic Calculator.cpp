// Creating a Basic calculator that add , multiplies , subtracts and divides 2 numbers
#include<iostream>

using namespace std;

float value1 ,value2; //declare global variables for values 1 and 2 

void Add()
{
 float sum = value1 +value2;// addition operation for values 1 and 2
 cout<< "Addition is "<<sum<<endl;

}

void Sub()
{
    float sub = value1 - value2; // subtraction operation for values 1 and 2
    cout<< "Subtraction is "<<sub<<endl;
}

void Multi()
{
    float multi = value1*value2; // Multiplication operation for values 1 and 2
    cout<< "Multiplaction is "<<multi<<endl;
}

void Div()
{
    float div = value1/value2;// Division operation for values 1 and 2
    cout<< "Division is "<< div<<endl;

}
int main()
{
    cout << "Give One Number "<<endl;
    cin >>value1;
    cout << "Give Another Number"<<endl;
    cin >>value2;

    cout<< "Given Number 1 is "<<value1<<endl;
    cout<< "Given Number 2 is "<<value2<<endl;

    Add();
    Sub();
    Multi();
    Div();

return 0;
}

//Successful Operation.