#include<iostream>
#include<math.h>
using namespace std;
int main()
{
 int n,s=1;
 cin>>n;
 if(n==0)
   cout<<"1";
 else{
 for(int i=1;i<=n;i++)
    s*=i;
 cout<<s;}

}
