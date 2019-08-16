#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{
   string s;
   int flag=0;
   char  t[1000];
   int j=0;
   cin>>s;
   for(int i=s.length()-1;i>=0;i--)
   {
       t[j++]=s[i];
   }
   for(int i=0;i<s.length();i++)
   {
       if(s[i]==t[i])
        continue;
       else
        flag=1;
   }
   if(flag==0)
    cout<<"yes";
   else
    cout<<"no";

}

