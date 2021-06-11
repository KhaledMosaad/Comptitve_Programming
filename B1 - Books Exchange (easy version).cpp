#include<bits/stdc++.h>
typedef long long ll;
typedef long double ld;
using namespace std;
int main(){
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<ll> p(n+1);
        vector<ll> ans(n+1,1);
        for(int i=1;i<=n;i++)
            cin>>p[i];
 
        for(int i=1;i<=n;i++)
        {
            int pos=p[i];
            while(pos!=i)
            {
                ans[i]++;
                pos=p[pos];
            }
        }
 
        for(int i=1;i<=n;i++)
        {
            cout<<ans[i]<<" ";
        }
        cout<<endl;
 
    }
    return 0;
}
