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
const ll N = 10e9;
bool visited[200000];
vvi graph(150);
int main()
{
    fast();
    int n;
    cin>>n;
    int a[n],b[n];
    vii res;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        b[i]=a[i];
    }
    sort(b,b+n);
    for(int i=0;i<n;i++)
    {
        if(a[i]!=b[i])
        for(int j=i+1;j<n;j++)
        {
            if(a[j]==b[i]&&a[i]!=a[j])
            {
                swap(a[i],a[j]);
                res.pb(make_pair(i,j));
            }
        }
    }
    cout<<res.size()<<endl;
    for(int i=0;i<res.size();i++)
    {
        cout<<res[i].first<<" "<<res[i].second<<endl;
    }
    return 0; // 1 2 4 5 5
}
