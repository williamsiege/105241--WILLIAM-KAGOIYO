#include<iostream>
#include<string>

using namespace std;

int main()
{
    // Declaration and initialization of a 2d Array
    int sum,product, mean;
    int twoDarray[3][4]={
        {1,2,3,4}, {5, 6,7,8}, {9,10,11,12}
    };

    // Accessing elements of the 2d Array using index location of each array which is very long.

   /* cout << "Element at the twoD array [1] [2] "<<twoDarray[1][2]<<endl;
    cout << "Element at the twoD array [0] [2] "<<twoDarray[0][2]<<endl;
    cout << "Element at the twoD array [2] [0] "<<twoDarray[2][0]<<endl;
    cout << "Element at the twoD array [2] [1] "<<twoDarray[2][1]<<endl;
    cout << "Element at the twoD array [1] [0] "<<twoDarray[1][0]<<endl;
    cout << "Element at the twoD array [1] [3] "<<twoDarray[1][3]<<endl;  */ 

// simplify iteration through the 2D Array using nested loops.
    for (int rowIndex = 0; rowIndex<3; ++rowIndex){  // outer loop iterates through the rows 
        for(int columnIndex = 0; columnIndex<4 ; ++columnIndex){  // inner loo[ iterates through the columns
            cout<<twoDarray[rowIndex][columnIndex]<<",";
            sum+=twoDarray[rowIndex][columnIndex];
            product*=twoDarray[rowIndex][columnIndex];
        }
        cout<<endl;
    }

cout << "Sum of the values is "<< sum<<endl;
cout << "Product of the values is "<< product<<endl;
mean = sum/12;
cout<< "Mean of the Array is  "<<mean<<endl;


    return 0;
}