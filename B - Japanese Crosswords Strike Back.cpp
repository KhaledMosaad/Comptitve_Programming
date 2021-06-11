#include <bits/stdc++.h>
#define all(v) (v.begin(),v.end())
#define sz(v) ((int)((v).size()))
#define F first
#define S second
#define pb push_back
#define mp make_pair
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
int n,a,b;
void solve()
{
    int n,x;
    ll sum=0;
    cin>>n>>x;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    if(n==1&&sum==x) cout<<"YES"<<endl;
    else if((sum>=x||sum+n-1!=x)) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
}
int main()
{
    fast();
    //int t;
    //cin>>t;
    //while(t--)
    //{
        solve();
    //}
    return 0;
}
