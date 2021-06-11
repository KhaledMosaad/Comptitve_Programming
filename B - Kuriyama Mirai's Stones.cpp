#include <bits/stdc++.h>
#define all(v) (v.begin(),v.end())
#define sz(v) ((int)((v).size()))
#define F first
#define S second
#define pb push_back
#define mp make_pair
using namespace std;
typedef long long ll;
typedef pair<int, int > pii;
typedef vector<int> vi;
typedef vector<ll> vl;
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
    int n,m;
    cin>>n;
    int a[n];
    vl v(n+1,0),u(n+1,0);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        v[i+1]=v[i]+a[i];
    }
    sort(a,a+n);
    for(int i=0;i<n;i++)
    {
        u[i+1]=u[i]+a[i];
    }
    cin>>m;
    for(int i=0;i<m;i++)
    {
        int x,y,z;
        cin>>x>>y>>z;
        if(x==1)
        {
            cout<<v[z]-v[y-1]<<"\n";
        }
        else
        {
            cout<<u[z]-u[y-1]<<"\n";
        }
    }
    return 0;
}
