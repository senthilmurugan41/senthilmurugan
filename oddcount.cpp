#include<iostream>
#include<math.h>
using namespace std;
int main()
{
  int n,n1=0;
  cin>>n;
  while(n!=0)
  {
     n1=n1*10+n%10;
     n=n/10;
  }
  while(n1!=0)
  {
      int t=n1%10;
      if(t%2!=0)
        cout<<t<<" ";
      n1=n1/10;
  }

}

