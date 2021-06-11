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
bool visited[200];
vvi graph;
bool hasCycle(int node,int perant,int &cnt)
{
    if(visited[node]) return true;
    visited[node]=1;
    for(int child:graph[node])
    {
        if(child!=perant)
        {
           cnt++;
           if(hasCycle(child,node,cnt))
           {
               return true;
           }
        }
    }
    return false;
}
int main()
{
    fast();
    int m;
    cin>>n>>m;
    graph=vvi (n);
    for(int i=0;i<m;i++)
    {
        int x,y;
        cin>>x>>y;
        x--,y--;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }
    int toRemove=0;
    for(int i=1;i<n;i++)
    {
        if(!visited[i])
        {
            int cnt=0;
            if(hasCycle(i,-1,cnt))
            {
                toRemove+=(cnt%2==1);
            }
        }
    }
    if((n-toRemove)%2==1)
        toRemove++;
    cout<<toRemove;
    return 0;
}
