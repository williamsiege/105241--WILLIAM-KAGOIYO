#include<iostream>
#include<string>

using namespace std;

int main()
{
    int numbers[5];
    cout << " Please enter 5 values into the array:";
    for (int i= 0; i< 5; i++)
    {
        cin >> numbers[i];
    }
    cout << " The values you entered are: ";

    for (int j = 0; j < 5; j++)
    {
        /* code */
        cout<<numbers[j]<<endl;
    }
    
    
    
    
return 0;
}