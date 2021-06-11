#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;
#define all(v) v.begin(),v.end()
#define sz(v) (int)((v).size())
#define F first
#define S second
#define pb push_back
#define mp make_pair
#define el '\n'
 
typedef long long ll;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> indexed_set;
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
void solve()
{
 int m, s;
 cin >> m >> s;
 if (m == 1 && s == 0)
 {
  cout << 0 << " " << 0 << el;
  return;
 }
 else if (9 * m < s || (m >= 2 && s == 0))
 {
  cout << -1 << " " << -1 << el;
  return;
 }
 string dp[s + 1];
 string dpm[s + 1];
 dp[0] = "-1";
 dpm[0] = "-1";
 dp[1] = string(1, '1') + string(m - 1, '0');
 dpm[1] = string(1, '1') + string(m - 1, '0');
 for (int k = 2; k <= s; k++) {
  int w = 0;
  while (dp[k - 1][w] == '9')
  {
   w++;
  }
  dp[k] = dp[k - 1];
  dp[k][w]++;
  int y = dpm[k - 1].length() - 1;
  while (dpm[k - 1][y] == '9')
  {
   y--;
  }
  dpm[k] = dpm[k - 1];
  dpm[k][y]++;
 }
 if (dp[s] == "-1")
 {
  cout << -1 << " " << -1 << el;
 }
 else
 {
  string res = dp[s];
  reverse(res.begin(), res.end());
  int i = 0;
  while (res[i] == '0')
  {
   i++;
  }
  swap(res[i], res[0]);
  cout << min(res, dpm[s]) << " " << dp[s] << el;
 
 }
}
int main() {
 fast();
 // int t;
 // cin >> t;
 // while (t--)
 solve();
 return 0;
}
