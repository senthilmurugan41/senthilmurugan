#include<iostream>
#include<math.h>
using namespace std;
int main()
{
  int n,n1;
  double x;
  cin>>n>>n1;
  n=n*n1;
  x=sqrt(n);
  if(x-floor(x)==0)
    cout<<"yes";
  else
    cout<<"no";

}

