#include <bits/stdc++.h>
#define all(v) (v.begin(),v.end())
#define sz(v) ((int)((v).size()))
#define F first
#define S second
#define PB push_back
#define MP make_pair
using namespace std;
typedef long long ll;
typedef pair<int ,int > pii;
typedef vector<int> vi;
typedef vector <pii> vii;
typedef vector<vector<int>> vvi;
const ll N=10e9;
int n,d,a[100001],b[100001];
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    ll n,t,c,res=0;
    cin>>n>>t>>c;
    vi v;
    v.push_back(-1);
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        if(a>t)
            v.push_back(i);
    }
    v.push_back(n);
    for(int i=1;i<(int) v.size()  ;i++)
    {
        int deff=v[i]-v[i-1]-c;
        res+=max(deff,0);
    }
    cout<<res<<endl;
    /*cin>>a[0];
    for(int i=1;i<n;i++)
    {
        int aa;
        cin>>aa;
        a[i]=a[i-1]+aa;
    }
    int res=0;
    if(a[c-1]<=t) res++;
    for(int i=c;i<n;i++)
    {
        if(a[i]-a[i-c]<=t) res++;
    }
    cout<<res<<endl;*/
    return 0;
}
