#include <bits/stdc++.h>
//#include <ext/pb_ds/assoc_container.hpp>
//using namespace __gnu_pbds;
using namespace std;
#define all(v) v.begin(),v.end()
#define sz(v) (int)((v).size())
#define F first
#define S second
#define pb push_back
#define mp make_pair
#define el '\n'
 
typedef long long ll;
//typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> indexed_set;
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
typedef vector<vl> vvl;
 
void fast() {
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr); cout.tie(nullptr);
#ifndef ONLINE_JUDGE
 freopen("inputf.txt", "r", stdin);
 freopen("outputf.txt", "w", stdout);
#endif
}
const ll mxprime = 1e9 + 7;
void solve()
{
 ll n, mi = 1e10, miind = 0;
 cin >> n;
 vl v(n);
 for (int i = 0; i < n; i++)
 {
  cin >> v[i];
  if (mi > v[i]) {
   mi = min(mi, v[i]);
   miind = i;
  }
 }
 vvl res;
 if (miind & 1) {
  for (int i = n - 1; i >= 0; i--)
  {
   if (i != miind) {
    if (i & 1)
    {
     res.pb({i + 1, miind + 1, mi, mi});
     v[i] = mi;
    }
    else
    {
     res.pb({i + 1, miind + 1, mxprime, mi});
     v[i] = mxprime;
    }
   }
  }
 }
 else
 {
  for (int i = n - 1; i >= 0; i--)
  {
   if (i != miind) {
    if (i % 2 == 0)
    {
     res.pb({i + 1, miind + 1, mi, mi});
     v[i] = mi;
    }
    else
    {
     res.pb({i + 1, miind + 1, mxprime, mi});
     v[i] = mxprime;
    }
   }
  }
 }
 cout << res.size() << el;
 for (int i = 0; i < res.size(); i++)
 {
  for (int j = 0; j < res[i].size(); j++)
  {
   cout << res[i][j] << " ";
  }
  cout << el;
 }
}
int main() {
 fast();
 int t;
 cin >> t;
 while (t--)
  solve();
 return 0;
}
