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
vul qi;
void qp()
{
    for(ull i=1;i<=90000;i++)
    {
        ull x=i*i*i;
        qi.pb(x);
    }
}
void solve()
{
 
}
int main() {
    int x;
    cin>>x;
    if(x<=5)
    {
        cout<<1<<endl;
    }
    else
    {
        int res=x/5;
        if(x%5) res++;
        cout<<res<<endl;
    }
    return 0;
}
