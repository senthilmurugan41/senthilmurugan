#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
int main()
{
 char s[1000];
 gets(s);
 int c=0;
 for(int i=0;i<strlen(s);i++)
 {
     if(s[i]!=' ')
        c++;

 }
 cout<<c;
}
