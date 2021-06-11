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
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr); cout.tie(nullptr); // 0 10 25 37
#ifndef ONLINE_JUDGE
 freopen("inputf.txt", "r", stdin);
 freopen("outputf.txt", "w", stdout);
#endif
}
void solve()
{
 string s;
 cin >> s;
 int ans = 1e9;
 vector<pair<char, int>> pr;
 for (int i = 0; i < s.length(); i++)
 {
  if (pr.empty() || pr.back().F != s[i])
  {
   pr.pb({s[i], 1});
  }
  else
   pr.back().S++;
 }
 for (int i = 1; i < pr.size() - 1; i++)
 {
  if (pr[i - 1].F != pr[i + 1].F)
  {
   ans = min(ans, pr[i].S + 2);
  }
 }
 if (ans == 1e9)
 {
  cout << 0 << el;
 }
 else cout << ans << el;
}
int main() {
 fast();
 int t;
 cin >> t;
 while (t--)
  solve();
 return 0;
}
