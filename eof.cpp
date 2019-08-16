#include<iostream>
#include<cmath>
using namespace std;
int main()
{
  int a[1000];
  for(int i=0;a[i]!='\0';i++)
  {
      cin>>a[i];

  }

  for(int i=0;a[i]!='\0';i++)
  {
     cout<<abs(a[i]-a[i+1])<<endl;
     i++;
  }

}

