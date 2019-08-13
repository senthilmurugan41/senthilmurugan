#include<iostream>
using namespace std;
int main()
{
  int a,temp,rev=0;
  cin>>a;
  temp=a;
  while(temp!=0)
  {
      rev=rev*10+temp%10;
      temp=temp/10;
  }
  if(rev==a)
    cout<<"yes";
  else
    cout<<"no";
    return 0;
}
