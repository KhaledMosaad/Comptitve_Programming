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
typedef pair<int, int> pii;
typedef pair< ll, ll> pll;
typedef vector<pll> vll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<ull> vul;
typedef vector<pii> vii;
typedef vector<vi> vvi;
 
void fast() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
void solve()
{
   int n;
   cin>>n;
   int a[n];
   for(int i=0;i<n;i++) cin>>a[i];
   bool ok = true;
   for(int i=0;i<n;i++)
   {
       if((a[i]<i&&a[i]<n-i-1)||(i<n-1&&a[i]==i&&a[i+1]==n-i-2&&a[i]==a[i+1]))
       {
           ok=false;
           break;
       }
   }
   if(ok) cout<<"Yes"<<endl;
   else cout<<"No"<<endl;
}
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
