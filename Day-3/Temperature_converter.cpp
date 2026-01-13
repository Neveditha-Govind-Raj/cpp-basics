#include <iostream>
using namespace std;
int main(){
    int choice;
    double temp;
    double result;
    cout<<"**********Temperature Converter**********\n";
    
    cout<<"1.Convert Farenheit to Celsius\n";
    cout<<"2.Convert Celsius to Farenheit\n";
    cout<<"Make your choice:\n";
    cin>>choice;
    switch (choice){
        case 1:
            cout<<"Enter Temperature:\n";
            cin>>temp;
            result=(temp-32)/1.8;
            cout<<"The temperature in Celsius is :"<<result<<endl;
            break;
        case 2:
            cout<<"Enter Temperature:\n";
            cin>>temp;
            result=(1.8*temp)+32;
            cout<<"The temperature in Farenheit is :"<<result<<endl;
            break;

        default :
            cout<<"Invalid input";
    }

    return 0;

    cout<<"*****************************************\n";

}