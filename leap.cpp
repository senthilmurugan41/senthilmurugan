#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
   int n;
    cin>>n;
    if(n%100&&n%400==0)
        cout<<"yes";
    else if(n%4==0)
       cout<<"yes";
    else
       cout<<"no";
    return 0;


}
