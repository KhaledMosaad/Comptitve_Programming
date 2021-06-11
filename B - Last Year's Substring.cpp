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
int n,a,b;
bool can(string s)
{
    if(s[0]=='2'&&s[n-3]=='0'&&s[n-2]=='2'&&s[n-1]=='0') return true;
    if(s[0]=='2'&&s[1]=='0'&&s[2]=='2'&&s[n-1]=='0') return true;
    if(s[0]=='2'&&s[1]=='0'&&s[n-2]=='2'&&s[n-1]=='0') return true;
    return false;
}
void solve()
{
    string s;
    cin>>n>>s;
    if(s=="2020"||s.substr(0,4)=="2020"||s.substr(n-4,4)=="2020"||can(s))
    {
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;
 
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
