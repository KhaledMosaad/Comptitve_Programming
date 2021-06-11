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
 
void fast() {
 ios::sync_with_stdio(0);
 cin.tie(0);
 cout.tie(0);
#ifndef ONLINE_JUDGE
 freopen("inputf.txt", "r", stdin);
 freopen("outputf.txt", "w", stdout);
#endif
}
const int maxmum = 2e5 + 5;
void solve()
{
 int n, k, cnt = 0;
 cin >> n >> k;
 vi v(n), res;
 for (int i = 0; i < n; i++)
 {
  cin >> v[i];
 }
 res.pb(v[0]);
 for (int i = 1; i < n; i++)
 {
  if (v[i - 1] >= k || v[i - 1] + v[i] >= k)
  {
   res.pb(v[i]);
  }
  else
  {
   cnt += (k - (v[i] + v[i - 1]));
   v[i] += (k - (v[i] + v[i - 1]));
   res.pb(v[i]);
  }
 }
 // if (n & 1 && v[n - 1] + v[n - 2] < k)
 // {
 //  cnt += (k - (v[n - 1] + v[n - 2]));
 //  v[n - 1] += (k - (v[n - 1] + v[n - 2]));
 //  res.pb(v[n - 1]);
 // }
 // else if (n & 1)
 // {
 //  res.pb(v[n - 1]);
 // }
 cout << cnt << el;
 for (int i = 0; i < n; i++)
 {
  cout << res[i] << " ";
 }
 cout << el;
}
int main() {
 fast();
 // int t;
 // cin >> t;
 // while (t--)
 solve();
 return 0;
}
