#include <bits/stdc++.h>
#define all(v) (v.begin(),v.end())
#define sz(v) ((int)((v).size()))
#define F first
#define S second
#define PB push_back
#define MP make_pair
using namespace std;
typedef long long ll;
typedef pair<int, int > pii;
typedef vector<int> vi;
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
int n, d, a[100001], b[100001];
bool adj[26][26];
bool vis[26][26];
 
bool valid(int r, int c)
{
    if(r < n && r >= 0 && c < n && c >= 0)
        return true;
    return false;
}
 
void dfs(int row, int col)
{
    vis[row][col] = true;
    for(int i = 0; i < row; i++)
        {
            for(int j = 0; j < col; j++)
                {
                    if(!vis[i][j])
                        dfs(i, j);
                }
        }
}
 
int complement(int a)
{
    return 7-a;
}
int main()
{
    fast();
    int n,x;
    cin>>n>>x;
    pair<int ,int > a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i].first>>a[i].second;
    }
    if(n==1)
    {
        cout<<"YES"<<endl;
        return 0;
    }
    else{
        for(int i=1;i<n;i++)
        {
            if(a[i].first==x||a[i].first==complement(x)||a[i].second==x||a[i].second==complement(x))
            {
                cout<<"NO"<<endl;
                return 0;
            }
        }
 
    }
    cout<<"YES"<<endl;
    return 0;
}
