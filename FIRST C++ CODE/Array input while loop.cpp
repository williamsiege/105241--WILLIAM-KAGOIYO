#include<iostream>
#include<string>

using namespace std;

int main()
{
    int numbers[5];
    int index =0;
    int sum;
    while(index<5)
    {
        /* using while loop to enter the array */
        cout <<"Enter a Number:\t";
        cin >> numbers[index];
        index++;
    }
    // printing the array elements 
    cout <<"\n The entered numbers are:"<<endl;

    while (index<5)
    {
       cout<< numbers[index]<<",";
       index++;
       
    }

    while (index<5)
    {
        sum+=numbers[index];
    }
    
    cout << endl;
    // calculating the sum of the array elements
    cout<< "The sum of the array "<<sum;
return 0;
}