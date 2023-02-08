#include<iostream>
using namespace std;
int main()
{
    int op1,op2;
    char ch;
    cout<<"enter the operand 1 and operand 2:";
    cin>>op1>>op2;
    cout<<"enter operator you have to perform:";
    cin>>ch;
    switch(ch)
    {
        case '+':
        cout<<"sum="<<op1+op2<<endl;
        break;
        case '-':
        cout<<"difference="<<op1-op2<<endl;
        break;
        case '*':
        cout<<"multiplication="<<op1*op2<<endl;
        break;
        case '/':
        cout<<"division="<<op1/op2<<endl;
        break;
        default:
        cout<<"enter valid operator"<<endl;
        break;
    }
    return 0;
}