#include <iostream>
#include <cmath>
using namespace std;
double balance=1000;
double Balance(double &balance){
    return balance ;
}

void Deposit(double &balance){
    cout<<"Enter amount to deposit:";
    double deposit;
    cin>>deposit;
    if (deposit>0){
        balance+=deposit;
    }
    else{
        cout<<"Invalid!!Try again";
    }
    
}
void Withdraw(double &balance){
    double withdraw;
    cout<<"Enter amount to withdraw:";
    cin>>withdraw;
    if (withdraw>0 && (balance-withdraw)>=1000){
        balance-=withdraw;
    }
    else{
        cout<<"Sorry invalid!!!Try again";
    }
}
int main(){
    int choice;
    do{
    cout<<"\n**********ATM MACHINE**********\n";
    cout<<"1.CHECK BALANCE\n";
    cout<<"2.DEPOSIT\n";
    cout<<"3.WITHDRAW\n";
    cout<<"4.EXIT\n";
    cout<<"*******************************\n";
    cout<<"Enter your choice:";
    cin>>choice;
    
    

    switch(choice){
        case 1:
            cout<<"Your balance is:"<<Balance(balance);
            break;
        case 2:
            Deposit(balance);
            break;
        case 3:
            Withdraw(balance);
            break;
        case 4:
            cout<<"Thanks for visiting!!\n";
            break;
        default:
            cout<<"Invalid input";
    }

    }while (choice!=4);
    return 0;
}