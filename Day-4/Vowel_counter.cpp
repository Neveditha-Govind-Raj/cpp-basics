#include <iostream>
#include <string>
using namespace std;
int main(){
    string word;
    cout<<"Enter the required word:";
    getline(cin,word);
    int i;
    int num;
    char ch;
    num=0;
    for (i=0;i<word.length();i+=1){
        ch=word[i];
        if (ch=='A' || ch=='a' || ch=='E'|| ch=='e'||ch=='I'||
            ch=='i'||ch=='O'||ch=='o'||ch=='U'||ch=='u'){
            num+=1;
        };
    };
    cout<<"Total number of vowels:"<<num;
    return 0;
}