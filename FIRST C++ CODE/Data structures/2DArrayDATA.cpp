#include <iostream> //Used for inputs and outputs
using namespace std; //standard library

int main(){
    //Reading and writing a 2d array using rows and columns
    int arr[2][4];
    cout<<"Enter values:"<<endl;

    for(int i = 0; i <=1; i++){
        for(int j = 0; j <=1; j++){
            cin>>arr[i][j];
            cout<<"Value at index"<<arr[i]<<""<<arr[j]<<"is"<<endl;
    } 
    
    }
    cout<<"See the values below:"<<endl;

    for(int i = 0; i <=1; i++){
        for(int j = 0; j <=1; j++){
            cout<<arr[i][j]<<",";
        }
    }
    return 0;
}