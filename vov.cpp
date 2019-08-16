#include<iostream>
using namespace std;
int main()
{
   string s;
   int flag=0;
   cin>>s;
   for(int i=0;i<s.length();i++)
   {
       if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
        flag=1;

   }
   if(flag==1)
    cout<<"yes";
   else
    cout<<"no";
}

