#include<iostream>
#include<math.h>
using namespace std;
int main()
{
  int n,temp,rev=0;
  cin>>n;
  temp=n;
  while(temp!=0)
  {
      rev=rev+pow(temp%10,3);
      temp=temp/10;
  }
  if(n==rev)
    cout<<"yes";
  else
    cout<<"no";
}
