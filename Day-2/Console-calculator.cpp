#include <iostream>
int main(){
    std::cout<<"***********CALCULATOR***********"<<std::endl;
    double num1;
    double num2;
    char op;
    std::cout<<"Enter first number:";
    std::cin>>num1;
    std::cout<<"Enter second number:";
    std::cin>>num2;
    std::cout<<"Choose operation required: + - / *:"<<std::endl;
    std::cin>>op;
    switch(op){
        case'+':
            std::cout<<"Addition gives:"<<num1+num2<<std::endl;
            break;
        case'-':
            std::cout<<"Subtraction gives:"<<num1-num2<<std::endl;
            break;
        case'/':
            std::cout<<"Division gives:"<<num1/num2<<std::endl;
            break;
        case'*':
            std::cout<<"Multiplication gives:"<<num1*num2<<std::endl;
            break;

        default:
            std::cout<<"Incorrect operation"<<std::endl;

    }
    std::cout<<"********************************";
    return 0;

}