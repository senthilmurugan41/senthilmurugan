#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
  int x,y;
  cin>>x>>y;
   cout<<((x*y)/__gcd(x,y));
}
