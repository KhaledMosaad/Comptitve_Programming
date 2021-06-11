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
vector<int> vec(100005,0);
int main()
{
    fast();
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int a;
        cin>>a;
        vec[a]=i;
    }
    ll m,v=0,p=0;
    cin>>m;
    while(m--)
    {
        int a;
        cin>>a;
        v+=vec[a];
        p+=n-vec[a]+1;
    }
    cout<<v<<" "<<p<<endl;
    return 0;
}
