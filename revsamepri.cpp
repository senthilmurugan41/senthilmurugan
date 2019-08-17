#include<iostream>
#include<math.h>
#include<string.h>
#include<algorithm>
using namespace std;
int main()
{
    string s;
    char a[10000];
    int n,i=0;
    cin>>s>>n;
    int x=s.length();
    while(n!=0)
    {
        a[i]=s[x-1];
        x--;
        i++;
        n--;
    }
    for(int j=strlen(a)-1;j>=0;j--)
    {
        cout<<a[j];
    }


}

