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
    int n,m;
    cin>>n>>m;
    int mi=INT_MAX;
    int a[m],b[101];
    memset(b,0,sizeof(b));
    for(int i=0;i<m;i++)
    {
        cin>>a[i];
        b[a[i]]++;
    }
    if(n>m)
    {
        cout<<0<<endl;
        return;
    }
    int res=1;
    while(res++){
        int in=0;
        bool ok=false;
        for(int i=0;i<101;i++)
        {
            if(b[i]>=res-1)
            {
                in+=b[i]/(res-1);
            }
            if(in>=n)
            {
                ok=true;
                break;
            }
        }
        if(!ok)
        {
            cout<<res-2<<endl;
            return;
        }
    }
}
int main()
{
    fast();
   // int t;
   // cin>>t;
   // while(t--)
    //{
        solve();
    //}
    return 0;
}
