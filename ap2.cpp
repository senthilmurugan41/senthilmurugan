#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;
int main()
{
  float n;
  float a,d;
  cin>>a>>d>>n;
  int x=(n/2)*((2*a)+(n-1)*d);
  cout<<x;
}
