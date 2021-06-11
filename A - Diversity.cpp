#include <bits/stdc++.h>
using namespace std;
const int  N=10e5;
 bool u[int(2e5+9)];
 int ar[26];
int main()
{
    string s;
    int n;
    cin>>s>>n;
    for(int i=0;i<s.length();i++)
    {
        ar[int(s[i]-97)]++;
    }
    int cnt=0;
    for(int i=0;i<26;i++)
        {
            if(ar[i])
            {
                cnt++;
            }
        }
    if(n>s.length())
    {
        cout<<"impossible"<<endl;
    }
    else
    {
        if(n>=cnt) 
            cout<<n-cnt<<endl;
        else
            cout<<0<<endl;
    }
 
   return 0;
}
