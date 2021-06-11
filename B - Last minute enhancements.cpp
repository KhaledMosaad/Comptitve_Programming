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
ll n;
void solve()
{
    cin>>n;
    vi a(n);
    int freq[2*n+n+1];
    memset(freq,0,sizeof(freq));
    int res=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(freq[a[i]]==0) res++;
        freq[a[i]]++;
    }
    for(int i=1;i<=2*n+n-1;i++)
    {
        if(freq[i]>1)
        {
            if(freq[i+1]==0)
                res++;
                freq[i+1]++;
            freq[i]--;
        }
        //cout<<freq[i]<<endl;
    }
    cout<<res<<endl;
}
int main()
{
    fast();
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}
