#include<iostream>
using namespace std;
int main()
{
    int length,breadth;
    cout<<"enter the value of length and breadth:";
    cin>>length>>breadth;
    if(length==breadth)
    cout<<"It is a square"<<endl;
    else
    cout<<"It is rectangle"<<endl;
    return 0;
}