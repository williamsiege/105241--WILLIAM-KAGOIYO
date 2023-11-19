#include<iostream>
#include<string>

using namespace std;

int main()
{
    int numbers[9];
    int index =0;
    while(index<9)
    {
        /* using while loop to enter the array */
        cout <<"enter a Number:\t";
        cin >> numbers[index];
        index++;
    }
    // printing the array elements 
    cout <<"\n The entered numbers are:"<<endl;

    for (int j = 0; j < 10; j++)
    {
       cout<< numbers[j] << ",";
    }
    
return 0;
}