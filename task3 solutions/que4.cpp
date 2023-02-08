#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"enter any number:";
    cin>>num;
    if(num<0)
    {
      cout<<"the number is negative and skipped"<<endl;
    }
    else
    cout<<"number="<<num;
    return 0;
}