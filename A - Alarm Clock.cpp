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
int isprime(int n)
{
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            return i;
        }
    }
    return n;
}
void solve()
{
    ll a,b,c,d;
    cin>>a>>b>>c>>d;
    if(b>=a){
        cout<<b<<endl;
        return ;
    }
    if(b<a&&c<=d)
    {
        cout<<-1<<endl;
    }
    else
    {
        a-=b;
        ll w=ceil(1.0*a/(c-d));
        cout<<b+(w*c)<<endl;
    }
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
 
