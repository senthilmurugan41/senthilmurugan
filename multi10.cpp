#include<iostream>
using namespace std;
int main()
{
   int n,flag=0;
   cin>>n;
   while(flag!=1)
   {
       if(n%10==0)
       {
           flag=1;
       }
       n++;
   }
   cout<<--n;
}

