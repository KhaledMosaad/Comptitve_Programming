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
typedef vector<vector<int>> vvi;
void fast()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
}
const ll N = 10e9;
bool visited[200000];
vvi graph(150);
int main()
{
    fast();
    int n;
    cin>>n;
    set<string> st;
    string s[n];
    for(int i=0;i<n;i++) cin>>s[i];
    for(int i=n-1;i>=0;i--)
    {
        if(!st.count(s[i]))
        {
            cout<<s[i]<<endl;
            st.insert(s[i]);
        }
    }
    return 0;
}
