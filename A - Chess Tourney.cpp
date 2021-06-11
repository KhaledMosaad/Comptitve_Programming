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
int n,b;
void solve()
{
     cin>>n;
     n*=2;
     vector<int>  a(n);
     for(int i=0;i<n;i++) cin>>a[i];
     sort(a.begin(),a.end());
     if(a[n/2-1]==a[n/2]) cout<<"NO"<<endl;
     else cout<<"YES"<<endl;
}
int main()
{
    fast();
    solve();
    return 0;
}
