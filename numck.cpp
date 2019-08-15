#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
int main()
{
  string a;
  int flag=0;
  cin>>a;
  for(int i=0;i<a.length();i++)
  {
      if(isalpha(a[i]))
        flag=1;

  }
  if(flag==1)
    cout<<"No";
  else
    cout<<"Yes";

}
