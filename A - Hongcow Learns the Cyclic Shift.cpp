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
void solve()
{
    string s;
    cin>>s;
    int n=s.length();
    set<string> st;
    st.insert(s);
    int i=n-1;
    while(i--){
     s=s[n-1]+s.substr(0,n-1);
     st.insert(s);
    }
    cout<<st.size()<<endl;
}
int main()
{
    fast();
    //int t;
    //cin>>t;
    //while(t--)
    //{
        solve();
    //}
    return 0;
}
