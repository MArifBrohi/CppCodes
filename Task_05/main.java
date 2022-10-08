#include <iostream>
using namespace std;
int main()
{
    int accountNumber;
    float minimumBalance, currentBalance;
    char accountType;        // where you input 's'  OR  'c'

    float saving_Service_charge = 10.00;
    float checking_Service_Charge = 25.00;

    float savingInterest = 0.04;        // it is 4%
    float checkingInterest = 0.03;      // it is 3%

    float CHECKING_DEFAULT_INTEREST_RATE = 0.05;
    
    cout << "Please enter the account number: ";
    cin >> accountNumber;
    cout<<"Enter account type: ";
    cin>>accountType;
    cout<<"Enter minimumBalance: ";
    cin>>minimumBalance;
    cout<<"Enter currentBalance: ";
    cin>>currentBalance;
     
    
    if(accountType=='s' || accountType == 'S')
    {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Type: Savings" << endl;
        cout << "Minimum Balance: $" << minimumBalance << endl;
        cout << "Current Balance: $" << currentBalance << endl;

        if (currentBalance < minimumBalance) 
            {
                cout << "Service Fee: $" << saving_Service_charge << endl;
            } 
            
            else 
            {
                cout << "Interest Earned: $" << currentBalance * savingInterest
                << " at " << savingInterest*100 << "%" << endl;
            }
    }
    else if(accountType=='c' || accountType == 'C')
    {
            cout << "Account Number: " << accountNumber << endl;
            cout << "Account Type: Checking" << endl;
            cout << "Minimum Balance: $" << minimumBalance << endl;
            cout << "Current Balance: $" << currentBalance << endl;

            if (currentBalance < minimumBalance)
            {
                cout << "Service Fee: $" << checking_Service_Charge << endl;
            } 

            else if (currentBalance <= (minimumBalance + 5000.00)) 
            {
                cout << "Interest Earned: $" << currentBalance * checkingInterest
                << " at " << checkingInterest*100 << "%" << endl;
            }
    }
             
          
}
    
  
