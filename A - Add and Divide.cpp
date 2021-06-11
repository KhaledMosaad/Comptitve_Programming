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
 
void solve() {
    int a,b,res=1e9,w,c,d;
    cin>>a>>b;
    if(a<b)
    {
        cout<<1<<endl;
    }
    else if(a==b)
    {
        cout<<2<<endl;
    }
    else{
    for(int i=b;i<=b+100;i++) {
        w=i-b,c=a,d=i;
        while (c > d&&d>1) {
            c = floor(1.0 * c / d);
            w++;
        }
        if(d==1) continue;
        if(c==d) w++;
        res=min(res,w);
    }
    cout<<res+1<<endl;
    }
}
int main() {
    fast();
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}
