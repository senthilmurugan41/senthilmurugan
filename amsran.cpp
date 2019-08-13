#include<iostream>
#include<math.h>
using namespace std;
int main()
{
  int n,n2,temp,rev=0;
  cin>>n>>n2;
  for(int i=n+1;i<n2;i++)
  {

  temp=i;
  while(temp!=0)
  {
      rev=rev+pow(temp%10,3);
      temp=temp/10;
  }
  if(i==rev){
    cout<<i<<" ";
    rev=0;
  }
  else
    rev=0;

  }
}
