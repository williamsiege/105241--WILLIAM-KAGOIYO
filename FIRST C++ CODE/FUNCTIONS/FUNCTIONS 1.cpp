#include<iostream> // library declaration.
#include<string>

using namespace std;

int add(int, int); // function prototype/ declaration.

int main(){
    int var1=6, var2=3;
    cout<< add(var1,var2);// function call.
    return 0;

}

int add(int a, int b){ // function definition.
    return (a+b);
}