#include <bits/stdc++.h>
#define all(v) (v.begin(),v.end())
#define sz(v) ((int)((v).size()))
#define F first
#define S second
#define pb push_back
#define mp make_pair
#define endl '\n'
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
void solve()
{
    int n,m,neg=0,pos=0,z=0,w=-500,res=0;
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            int a;
            cin>>a;
            if(a>0)
            {
                pos++;
                w=max(w,-a);
            }
            else if(a<0)
            {
                neg++;
                w=max(w,a);
            }
            else
            {
                z++;
            }
            res+=abs(a);
        }
    }
    if(neg&1&&z>0)
    {
        cout<<res<<endl;
    }
    else if(neg&1)
    {
        cout<<res+2*w<<endl;
    }
    else
    {
        cout<<res<<endl;
    }
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
 
