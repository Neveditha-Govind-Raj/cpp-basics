#include <iostream>
#include <ctime>
using namespace std;

void ROCK(int choice){
    switch(choice){
        case 1:
            cout<<"Tie";
            break;
        case 2:
            cout<<"You Win!!";
            break;
        case 3:
            cout<<"Sorry , you lost this round";
            break;
        case 4:
            cout<<"Sorry,you lost this round";
            break;
        default:
            cout<<"INVALID!!Type correct number";



    }}
void PAPER(int choice){
    switch(choice){
        case 1:
            cout<<"Sorry , you lost this round";
            break;
        case 2:
            cout<<"Tie";
            break;
        case 3:
            cout<<"You Win!!";
            break;
        case 4:
            cout<<"You Win!!";
            break;
        default:
            cout<<"INVALID!!Type correct number";



    }
}
void SCISSORS(int choice){
    switch(choice){
        case 1:
            cout<<"You Win!!";
            break;
        case 2:
            cout<<"Sorry ,you lost this round";
            break;
        case 3:
            cout<<"Tie";
            break;
        case 4:
            cout<<"Sorry,you lost this round";
            break;
        default:
            cout<<"INVALID!!Type correct number";



    }
}
void PENCIL(int choice){
    switch(choice){
        case 1:
            cout<<"You Win";
            break;
        case 2:
            cout<<"Sorry,you lost this round";
            break;
        case 3:
            cout<<"You Win";
            break;
        case 4:
            cout<<"Tie";
            break;
        default:
            cout<<"INVALID!!Type correct number";



    }
}
int main(){
    int comp;
    int choice;
    do{
        cout<<"\n************ROCK PAPER SCISSORS************\n";
        cout<<"1.ROCK\n";
        cout<<"2.PAPER\n";
        cout<<"3.SCISSORS\n";
        cout<<"4.Pencil\n";
        cout<<"5.Exit\n";
        cout<<"Enter your choice:";
        cin>>choice;
            srand(time(NULL));
    comp=rand()%4+1;
    switch(comp){
        case 1:
            cout<<"Computer's choice is ROCK\n";
            ROCK(choice);
            break;
        case 2:
            cout<<"Computer's choice is PAPER\n";
            PAPER(choice);
            break;
        case 3:
            cout<<"Computer's choice is SCISSORS\n";
            SCISSORS(choice);
            break;
        case 4:
            cout<<"Computer's schoice is PENCIL\n";
            PENCIL(choice);
            break;
        default:
            cout<<"Thanks for playing!!!\n";
    return 0;

    }
    }while(choice!=5);

    

}