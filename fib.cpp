#include<iostream>
using namespace std;
int main()
{
  int n,fib=0,fib1=1,var=0;
  cin>>n;
  for(int i=1;i<=n;i++)
  {
      var=fib1+fib;
      cout<<var<<" ";
      fib1=fib;
      fib=var;

  }
}
