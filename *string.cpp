#include<iostream>
#include<math.h>
using namespace std;
int main()
{
   string s;
   cin>>s;
   if(s.length()%2!=0)
   {
      int n=s.length()/2;
      s[n]='*';
      cout<<s;
   }
   else
   {
       int n=(s.length()/2)-1;
       s[n]='*';
       s[n+1]='*';
       cout<<s;
   }
}

