#include<iostream>
using namespace std;
int main()
{
 int a,flag=0;
 cin>>a;
  for(int i=2;i<a;i++)
  {
      if(a%i==0)
         flag=1;
  }
  if(flag==1)
    cout<<"no";
  else
    cout<<"yes";
  return 0;
}
