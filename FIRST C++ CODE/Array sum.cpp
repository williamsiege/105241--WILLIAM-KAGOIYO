#include<iostream>
#include<string>

using namespace std;

int main()
{
    int numsTens[] = {10, 20, 30, 40, 50, 60, 70, 80,90,100} ;

    int sum;

    for (int j = 0 ; j<10 ; j++)
    {
      sum+= numsTens[j];
    }

    cout << "This the Sum Of The NUmbers "<<sum;
    return 0;
}