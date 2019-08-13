#include<iostream>
using namespace std;
int main()
{
   char a;
   cin>>a;
   if(isalpha(a))
      if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u')
          cout<<"Vowel";
       else
          cout<<"Consonant";
    else
        cout<<"invalid";
      return 0;
 }
         
