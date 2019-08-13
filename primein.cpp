#include<iostream>
using namespace std;
int main()
{
 int n,n1;
 cin>>n>>n1;
 for(int i=n+1;i<n1;i++)
 {
     int flag=0;
     for(int j=2;j<i;j++)
     {
         if(i%j==0)
            flag=1;
     }
     if(flag==0)
        cout<<i<<" ";

 }
}
