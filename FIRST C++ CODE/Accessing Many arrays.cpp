//Accessing Many Array elemnets.
#include<iostream>
#include<string>

using namespace std;

int main()
{
int myNums[] = {1,2 ,3 ,4 ,5 ,6 ,7};
for (int i =0 ; i<8; i++)
{
    cout << myNums [i] <<","; // 1,2,3,4.....
}

return 0;
}