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
void solve(){
 
}
int main() {
    fast();
    int t,s,q,ans=0;
    cin>>t>>s>>q;
    int w=s;
    while(w<t)
    {
        ans++;
        w+=(w*(q-1));
    }
    cout<<ans<<endl;
    return 0;
}
 
