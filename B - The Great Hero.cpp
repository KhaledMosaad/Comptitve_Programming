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
    ll A,B,n;
    cin>>A>>B>>n;
    vll a(n);
    for(int i=0;i<n;i++) {
        cin>>a[i].first;
    }
    for(int i=0;i<n;i++) {
        cin>>a[i].second;
    }
    sort(a.begin(),a.end());
    for(int i=0;i<n;i++)
    {
        ll w1=ceil(1.0*a[i].second/A);
        ll w2=ceil(1.0*B/a[i].first);
        if(w2<w1)
        {
            cout<<"No"<<endl;
            return;
        }
        else if(w2==w1)
        {
            if(i<n-1)
            {
                cout<<"No"<<endl;
                return;
            }
            else
            {
                cout<<"Yes"<<endl;
                return;
            }
        }
        else
        {
            B-=w1*a[i].first;
        }
    }
    cout<<"Yes"<<endl;
}
int main() {
    fast();
    int t;
    cin>>t;
    while(t--) {
        solve();
    }
    return 0;
}
