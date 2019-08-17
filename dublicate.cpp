#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    string s;
    int flag=0;
    cin>>s;
    sort(s.begin(),s.end());
    for(int i=0;i<s.length();i++)
    {
        if(s[i]==s[i+1])
        {
            flag=1;
        }
    }
    if(flag==1)
        cout<<"No";
    else
        cout<<"Yes";
}
