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
typedef pair<int, int > pii;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<ull> vul;
typedef vector <pii> vii;
typedef vector<vi> vvi;
void fast()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
void solve()
{
    int n;
    cin>>n;
    vector<int> res(n);
    res[0]=9;
    res[1]=8;
    int w=8;
    for(int i=2;i<n;i++)
    {
        res[i]=(++w)%10;
    }
    for(int i=0;i<n;i++) cout<<res[i];
    cout<<endl;
}
int main()
{
    fast();
    ll n;
    cin>>n;
    ll x[n];
    for(int i=0;i<n;i++)
        cin>>x[i];
    sort(x,x+n);
    ll ans=1e9,rep=0;
    for(int i=0;i<n;i++)
    {
        rep=0;
        for(int j=0;j<n;j++)
        {
                if(abs(x[i]-x[j])%2==1)
                {
                    rep++;
                }
        }
        ans=min(ans,rep);
    }
    cout<<ans<<endl;
    return 0;
}
 
