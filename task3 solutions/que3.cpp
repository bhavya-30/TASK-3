#include<iostream>
using namespace std;
int main()
{
    int cp,sp; //cp=cost price,sp=selling price
    int loss,profit;
    cout<<"enter the value of cp ans sp:";
    cin>>cp>>sp;
    
    
    if(sp>cp)
     {
        profit=sp-cp;
        cout<<"profit="<<profit<<endl;
     }
     else if(cp>sp)
     {
        loss=cp-sp;
      cout<<"loss="<<loss<<endl;
     }
     else
     cout<<"no profit no loss";
    return 0;

}