#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
  int a[100],b[100];
  char c[100];
  for(int i=0;i<100;i++)
  {
      cin>>a[i]>>c[i]>>b[i];
  }
  for(int i=0;c[i]!='/0';i++)
  {
      if(c[i]=='/')
        cout<<a[i]/b[i];
      else
        cout<<a[i]%b[i];
  }
}
