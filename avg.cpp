#include<iostream>
#include<algorithm>
using namespace std;
int main()
{

    int n,s=0;
    cin>>n;
    int *a=new int[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++)
        s+=a[i];
    s=s/n;
    cout<<s;
}
