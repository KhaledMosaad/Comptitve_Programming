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
typedef vector<vl> vvl;
typedef vector<ull> vul;
typedef vector<pii> vii;
typedef vector<vi> vvi;
 
void fast() {
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr); cout.tie(nullptr);
#ifndef ONLINE_JUDGE
 freopen("inputf.txt", "r", stdin);
 freopen("outputf.txt", "w", stdout);
#endif
}
bool cmp(vl &a, vl &b)
{
 return a.size() < b.size();
}
void solve()
{
 ll n, k;
 cin >> n >> k;
 if (k == 0)
 {
  cout << 0 << " " << 0 << el;
  return;
 }
 if (n == k)
 {
  cout << 0 << " ";
 }
 else {
  cout << 1 << " ";
 }
 ll ans = ceil(1.0 * n / 2);
 if (k == ans)
 {
  cout << n - ans << el;
 }
 else if (k < ans)
 {
  ll w = k * 3;
  if (w <= n)
   cout << k * 2 << el;
  else cout << n-k<< el;
 }
 else
 {
  cout << n - ans - (k - ans) << el;
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
