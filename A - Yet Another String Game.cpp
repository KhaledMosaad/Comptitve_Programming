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
void solve()
{
    string s;
    cin>>s;
    for(int i=0;i<s.length();i+=2)
    {
        if(s[i]!='a') s[i]='a';
        else s[i]='b';
    }
    for(int i=1;i<s.length();i+=2)
    {
        if(s[i]!='z') s[i]='z';
        else s[i]='y'; 
    }
    cout<<s<<endl;
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
