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
    int n,k,d;
    cin>>n>>k>>d;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        a[i]--;
    }
    int cnt[k],c=0;
    memset(cnt,0,sizeof(cnt));
    for(int i=0;i<d;i++)
    {
        if(cnt[a[i]]==0)
            c++;
        cnt[a[i]]++;
    }
    int ans=c;
    for(int i=1;i<=n-d;i++)
    {
        if(cnt[a[i-1]]==1)
        {
            c--;
        }
        cnt[a[i-1]]--;
        if(cnt[a[i+d-1]]==0)
        {
            c++;
        }
        cnt[a[i+d-1]]++;
        ans=min(ans,c);
    }
    cout<<ans<<endl;
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
 
