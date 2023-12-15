#include<iostream>
#include<string>

using namespace std;

int main()
{
    int index; 
    int sum;
    int nums[5];

    do
    {
        cin >> nums[index];
        sum+= nums[index];
    } while (index<5);

cout << "Sum of the numbers is: " << sum << endl;

cout<<"The Values are " <<endl;
    do
    {
       
       cout<<nums[index];
       index++;
    } while (index<5);
    

return 0;
    
}