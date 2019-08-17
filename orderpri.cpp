#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;
int main()
{
  int n,flag=0,c;
  cin>>n;
  int * a=new int[n];
  for(int i=0;i<n;i++)
    cin>>a[i];
  sort(a,a+n);
  for(int i=0;i<n;i++)
  {
     for(int j=i+1;j<n;j++)
    {
        if(a[i]+1==a[j])
            continue;
        else
        {
              flag=1;
              c=j;
              break;

        }

    }
    if(flag==1)
    {
        cout<<c;
        break;
    }

  }
}
