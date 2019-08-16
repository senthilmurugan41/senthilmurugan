#include<iostream>
#include<cmath>
using namespace std;
int main()
{
  int n,n1;
  cin>>n>>n1;
  if(int(abs(n-n1))%2==0)
    cout<<"even";
  else
    cout<<"odd";

}

