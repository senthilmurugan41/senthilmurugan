#include<iostream>
#include<algorithm>
using namespace std;
int main()
{

  int n,n1,a[1000],s=0;
  cin>>n>>n1;
  for(int i=0;i<n;i++)
    cin>>a[i];
  for(int i=0;i<n1;i++)
    s+=a[i];
  cout<<s;
  return 0;


}
