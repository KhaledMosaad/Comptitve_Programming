#include <bits/stdc++.h>
#define all(v) (v.begin(),v.end())
#define sz(v) ((int)((v).size()))
#define F first
#define S second
#define pb push_back
#define mp make_pair
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int > pii;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<ull> vul;
typedef vector <pii> vii;
typedef vector<vector<int>> vvi;
void fast()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
}
const ll N = 10e9;
bool visited[200000];
vi res;
vvi graph(150);
void dfs(int node)
{
    visited[node]=1;
    for(auto child : graph[node])
    {
        if(!visited[child])
            dfs(child);
    }
    res.pb(node);
}
int main()
{
    fast();
    int t;
    cin>>t;
    while(t--)
    {
        ll x;
        cin>>x;
        int ans=0;
        ll a=1;
        while(a*(a+1)/2<=x)
        {
            x-=a*(a+1)/2;
            ans++;
            a=2*a+1;
        }
        cout<<ans<<endl;
    }
    return 0;
}
