#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;
int main()
{
  int n,k,j=0;
  cin>>n>>k;
  int * a= new int[n];
  int * b= new int[n];
  for(int i=0;i<n;i++)
    cin>>a[i];
  sort(a,a+n);
  for(int i=0;i<n;i++)
  {
      if(a[i]==a[i+1])
        continue;
      else
        b[j++]=a[i];
  }
  sort(b,b+j);
  cout<<b[k-1];

}

