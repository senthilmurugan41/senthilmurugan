#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
  int n,k;
  cin>>n>>k;
  int * a= new int[n];
  for(int i=0;i<n;i++)
    cin>>a[i];

cout<<a[k-1];
}
