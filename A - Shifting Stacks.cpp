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
    ll w=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    vl b(n,0);
    b[0]=a[0];
    for(int i=1;i<n;i++) {
        b[i] = a[i] + b[i - 1];
        //cout<<b[i]<<endl;
    }
    for(int i=0;i<n;i++)
    {
        if(b[i]<(i*(i+1))/2)
        {
            cout<<"No"<<endl;
            return;
        }
    }
    cout<<"Yes"<<endl;
}
int main() {
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}
