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
int n,m;
int main()
{
    fast();
    cin>>n>>m;
    vi songs(n+1,0);
    for(int i=1;i<=n;i++)
    {
        int a,b;
        cin>>a>>b;
        songs[i]=songs[i-1]+(a*b);
    }
    for(int i=0;i<m;i++)
    {
        int a;
        cin>>a;
        cout<<lower_bound(songs.begin(),songs.end(),a)-songs.begin()<<"\n";
    }
    return 0;
}
