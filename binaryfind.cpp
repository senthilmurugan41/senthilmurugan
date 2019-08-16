#include<iostream>
using namespace std;
int main()
{
    int n,flag=0;
    cin>>n;
    while(n!=0)
    {
        if((n%10)*2==0||(n%10)*2==2)
           flag=1;
        else{
            flag=0;
            break;}
        n=n/10;
    }
    if(flag!=0)
        cout<<"yes";
    else
        cout<<"no";
}

