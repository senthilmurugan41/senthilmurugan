#include<iostream>
using namespace std;
int main()
{
    int a[1000],n=0;
    for(int i=0;a[i]!=-1;i++,n++)
    {
        cin>>a[i];
    }
    for(int i=0;a[i]!='\0';i++)
    {
        cout<<a[i+1]-a[i]<<" ";
        i++;
    }
}

