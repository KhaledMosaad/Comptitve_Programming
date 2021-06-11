#include<bits/stdc++.h>
typedef long long ll;
typedef long double ld;
using namespace std;
int main(){
    //ll t;
    //cin>>t;
   // while(t--)
   // {
        ld n;
        ld ans=0.0;
        cin>>n;
        for(int i=1;i<=n;i++)
        {
            ans+=1.0/i;
            //n-=n/2;
        }
        cout<<fixed<<setprecision(12)<<ans<<endl;
   // }
    return 0;
}
