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
    int n,k;
    cin>>n>>k;
    int res=k/n;
    int res2=ceil(1.0*n/k)*k;
    if(k<n)
    {
        if(res2%n==0)
        cout<<res2/n<<endl;
        else
        {
            cout<<res2/n+1<<endl;
        }
    }
    else{
        if(k%n==0)cout<<res<<endl;
        else cout<<res+1<<endl;
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
 
