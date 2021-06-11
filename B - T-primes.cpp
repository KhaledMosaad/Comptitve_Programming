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
const int mx=1e6+9;
vector<bool> isprime(mx, true);
void seive()
{
    isprime[0]=isprime[1]=false;
    for(int i=2;i*i<=mx;i++)
    {
        if(isprime[i])
        {
            for(int j=i*i;j<=mx;j+=i)
            {
                isprime[j]=false;
            }
        }
    }
}
void solve() {
    ll n;
    cin >> n;
    ll a[n];
    seive();
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++)
    {
        ll w=sqrt(a[i]);
        if(w*w==a[i]&&isprime[w])
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}
int main() {
    fast();
    solve();
    return 0;
}
