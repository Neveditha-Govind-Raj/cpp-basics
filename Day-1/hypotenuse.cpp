#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double a;
    double b;
    cout<<"Enter any 1 side of triangle:"<<endl;
    cin>>a;
    cout<<"Enter the other side of triangle:"<<endl;
    cin>>b;
    double x=pow(a,2);
    double y=pow(b,2);
    double c=sqrt(x+y);
    cout<<"The hypotenuse of the triangle is: "<<c<<endl;

    return 0;
}