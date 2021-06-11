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
    int w=1;
    vi v;
    while(n)
    {
        int r=n%10;
        n/=10;
        if(r==0)
        {
            w*=10;
            continue;
        }
        v.pb(r*w);
        w*=10;
 
    }
    cout<<v.size()<<endl;
    for(int i=0;i<sz(v);i++)
        cout<<v[i]<<" ";
    cout<<endl;
}
int main()
{
    fast();
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
 
