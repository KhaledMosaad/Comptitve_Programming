#include <bits/stdc++.h>
 
#define all(v) (v.begin(),v.end())
#define sz(v) ((int)((v).size()))
#define F first
#define S second
#define pb push_back
#define mp make_pair
#define endl '\n'
using namespace std;
typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;
typedef pair<int, int> pii;
typedef pair< ll, ll> pll;
typedef vector<pll> vll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<ull> vul;
typedef vector<pii> vii;
typedef vector<vi> vvi;
 
void fast() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
void solve()
{
    int n,res=0;
    cin>>n;
    vi a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<a.size()-1;i++)
    {
        if(ceil(1.0*max(a[i],a[i+1])/min(a[i],a[i+1]))>2)
        {
            res++;
            if(a[i]<a[i+1])
            {
                a.insert(a.begin()+i+1,2*a[i]);
            }
            else
            {
                int x=ceil(1.0*a[i]/2);
                a.insert(a.begin()+i+1,x);
            }
            //cout<<a[i+1]<<" "<<a[i]<<endl;
        }
    }
    cout<<res<<endl;
}
int main() {
    fast();
    int t;
    cin>>t;
    while(t--) {
        solve();
    }
    return 0;
}
