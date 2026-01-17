#include <iostream>
#include <ctime>
#include <cmath>
using namespace std;
int main(){
    srand(time(NULL));
    int num;
    int i;
    num=rand()%10+1;
    i=0;
    int guess;
    do{
        
         
        cout<<"Guess any number between 1-10:";
        cin>>guess;
        if (guess<1 || guess>10){
            cout<<"Invalid Range!! Kindly enter the correct range";
        }
        if (guess!=num){
            if (abs(guess-num )<=2){
                cout<<"You are closeby!!\n";

            }
            else{
                cout<<"You are far away!!\n";
            }
        }
        else{
            cout<<"Correct!!!\n";
        }

        i=i+1;
    }while(guess!=num);
    
    cout<<"The number of tries:"<<i<<"\n";
    return 0;
    
}