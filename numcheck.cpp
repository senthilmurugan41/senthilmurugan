#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
int main()
{
  char a[1000];
  int flag=0;
  gets(a);
  for(int i=0;i<strlen(a);i++)
  {
      if(isalpha(a[i]))
        flag=1;

  }
  if(flag==1)
    cout<<"No";
  else
    cout<<"Yes";

}
