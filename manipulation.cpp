#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
  double d[2];
  cin>>d[0]>>d[1];
  d[0]=d[0]*d[1];
  cout<<fixed;
  cout<<setprecision(5);
  cout<<d[0];

}

