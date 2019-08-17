#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;
int main()
{
  int n,s=1;
  cin>>n;
  while(n!=0)
  {
      s*=n%10;
      n=n/10;
  }
  cout<<s;

}

