//Creating a C++ Loan ap
#include<iostream>
#include<string>

using namespace std;

int main()
{
   long int age, balance, goodCustomer,crb;
    cout << "Please enter the age :  ";
    cin >> age;
    cout<<"\n";
    cout << "Please enter Bank balance:  ";
    cin >> balance;
    cout <<"\n";
    cout << "Please enter the CRB :  ";
    cin >> crb;
    cout<<"\n";
    cout << "Please enter Good conduct time :  ";
    cin >> goodCustomer;
    cout<<"\n";
if (age>=22){
    if (balance>=10000)
    {
       if (crb==0) {
        if (goodCustomer>=9)
            {
            cout<< "Qualified to apply for Loan"<<endl;
            cout<< "******DATA GIVEN***** :\n\n";
            cout<< "Age is : "<<age<<endl;
            cout<< "Bank Balance is : "<<balance<<endl;
            cout<< "CRB is : "<<crb<<endl;
            cout<< "Good Conduct time: "<<goodCustomer<<endl;
            cout<< "********CONGRATULATIONS********\n\n";
            }
        
    }
    
}
    
}else{
    cout << "Not Qualified for Loan"<<endl;
    cout<< "******DATA GIVEN***** :\n\n";
    cout<< "Age is : "<<age<<endl;
    cout<< "Bank Balance is kSH: "<<balance<<endl;
    cout<< "CRB is : "<<crb<<endl;
    cout<< "Good Conduct time: "<<goodCustomer<<"MONTHS"<<endl;
    cout<< "********SORRY TRY AGAIN LATER********\n\n";   
       
}
}
