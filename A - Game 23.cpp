#include<bits/stdc++.h>
typedef long long ll;
typedef long double ld;
using namespace std;
int main(){
    //ll t;
    //cin>>t;
   // while(t--)
   // {
        ll n,m,ans=-1;
        cin>>n>>m;
        ll d=m/n;
        if(m%n==0)
        {
            ans=0;
            while(d%2==0)
            {
                d/=2;
                ans++;
            }
            while(d%3==0)
            {
                d/=3;
                ans++;
            }
            if(d!=1)
                ans=-1;
        }
        cout<<ans<<endl;
   // }
    return 0;
}
