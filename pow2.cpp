#include<iostream>
using namespace std;
int main()
{
   int n,flag=0;
   cin>>n;
   while(n!=1)
   {
       if(n%2!=0)
        flag=1;
        n=n/2;
   }
   if(flag==0)
    cout<<"yes";
   else
    cout<<"no";
}
