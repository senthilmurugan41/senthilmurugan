#include<iostream>
using namespace std;
int main()
{
 int n;
 cin>>n;
 for(int i=n;i>0;i--)
 {
     if(i%2==0)
     {
         cout<<i;
         break;
     }
 }

}
