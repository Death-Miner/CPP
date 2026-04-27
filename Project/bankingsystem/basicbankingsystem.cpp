#include <iostream>
#include<iomanip>
using namespace std;
class bank_info{
    public:
    string name;
    long bankaccountnumber;
    long balance;
    bank_info(){
        cout<<"Enter your name "<<endl;
        cin.ignore();
        getline(cin,name);
        cout<<"Enter your bank account number "<<endl;
        cin>>bankaccountnumber;
        cout<<"Enter the balance of your account "<<endl;
        cin>>balance;
    }
    float withdrawl,deposit;
    public:
    int x;
        void depositl(){
            cout<<" Enter the amount of money you want to deposit "<<endl;
            cin>>deposit;
            cout<<left<<setw(20)<<">>>>>>>>> "<<" Depositing                          "<<"<<<<<<<<"<<setw(20)<<right<<endl;
            cout<<left<<setw(20)<<">>>>>>>>> "<<"    Done                             "<<"<<<<<<<<"<<setw(20)<<right<<endl;
            balance+=deposit;
            cout<<left<<setw(20)<<">>>>>>>>> "<<"Press 1 for checking your balance    "<<"<<<<<<<<"<<setw(20)<<right<<endl;
            cin>>x;
            
        }
        void withdrawll(){
            cout<<"Enter the amout you want to withdraw"<<endl;
            cin>>withdrawl;
            if (withdrawl>balance){
                cout<<"Issuficient Balance in your account "<<endl;
                cout<<"Enter 1 for checking your balance "<<endl;
                cin>>x;
            }
            else{
    
                balance-=withdrawl;
            }
        }
};



        
int main(){
    bank_info s1;
    int x;
    cout<<"Enter 1 if you want to deposit or 2 to withdrawl "<<endl;
    cin>>x;

    if(x==1){
        s1.depositl();

    }
    else if(x==2){
        s1.withdrawll();
        
    }
    else if (cin.fail()){
        cout<<" Please enter integer "<<endl;

    }
    else{
        cout<<"Enter 1 or 2 "<<endl;
    }
    if (s1.x==1){
        cout<<"Your balance is "<<s1.balance;
    }
}
