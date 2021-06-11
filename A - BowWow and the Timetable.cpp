#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    double cnt=0,l=s.length();
    for(int i=0;i<l;i++)
    {
        if(s[i]=='1')
            cnt++;
    }
    if(cnt==0) cout<<0<<endl;
    else if(cnt==1) cout<<ceil((l-1)/2)<<endl;
    else cout<<ceil(l/2)<<endl;
   return 0;
}
