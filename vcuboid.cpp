#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
  int l,w,h;
  cin>>l>>w>>h;
  cout<<(2*l*w)+(2*w*h)+(2*h*l)<<" "<<l*w*h;
}
