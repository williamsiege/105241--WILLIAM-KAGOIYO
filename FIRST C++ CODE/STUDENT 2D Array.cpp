#include<iostream>


using namespace std;

int main()
{
    // Declare a 2D  array with 5 row and 4 columns(students)
    string studentDetails[5][4]={
        {"172235","166705","124263","170458"},
        {"Nour Mustafa", "Cephas Melissa", "Chumo Victor", "Kagai Clara"},
        {"BBIT", "BCOM", "CNS", "BHM"},
        {"80.45","76.56","90.25","78.80"},
        {"A","A","A","A"}

    };
 for (int rowIndex = 0; rowIndex<5; ++rowIndex){  // outer loop iterates through the rows 
        for(int columnIndex = 0; columnIndex<4 ; ++columnIndex){  // inner loo[ iterates through the columns
            cout<<studentDetails[rowIndex][columnIndex]<<",\\\\";
            
        }
        cout<<endl;
    }

        
        
}