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
typedef vector<vector<int>> vvi;
void fast()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
}
const ll N = 10e9+5;
bool visited[200000];
vvi graph(150);
int n,a,b;
void solve()
{
    int n;
    cin>>n;
    unordered_set <int> st;
    vii v(n+1,{0,0});
    for(int i=1;i<=n;i++)
    {
        int a;
        cin>>a;
        v[a].first++;
        v[a].second=i;
    }
    for(int i=1;i<=n;i++)
    {
        if(v[i].first==1)
        {
            cout<<v[i].second<<endl;
            return;
        }
    }
    cout<<-1<<endl;
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
