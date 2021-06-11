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
int c[101];
void solve(){
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        c[a[i]]++;
    }
    int res=INT_MAX;
    for(int i=1;i<=100;i++)
    {
 
        if(c[i]!=0){
        int m=0;
        for(int j=0;j<n;j++)
        {
            if(a[j]!=i)
            {
                j+=k-1;
                m++;
            }
        }
        res=min(res,m);
        }
    }
    cout<<res<<endl;
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
