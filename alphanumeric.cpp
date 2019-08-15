#include<iostream>
using namespace std;
int main()
{
  string s;
  int c=0,c1=0;
  cin>>s;
  for(int i=0;i<s.length();i++)
  {
      if(isdigit(s[i]))
        c++;
      else if(isalpha(s[i]))
        c1++;
  }
  if(c!=0&&c1!=0)
    cout<<"Yes";
  else
    cout<<"No";
}
