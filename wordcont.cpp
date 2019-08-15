#include<iostream>
#include<cmath>
using namespace std;
int main()
{
 string s;
 int c1=0,c2=0;
 getline(cin,s);
 for(int i=0;i<s.length();i++)
 {
     if(s[i]!=' ')
        c2++;
     else
        c1=c2;

 }
 c2=abs(c1-c2);
 if(c1>=c2)
 {
     for(int i=0;i<c1;i++)
        cout<<s[i];
 }
 else
 {
     for(int i=c1+1;i<s.length();i++)
        cout<<s[i];
 }
}
