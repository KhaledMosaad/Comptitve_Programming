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
 cin.tie(nullptr); cout.tie(nullptr);
#ifndef ONLINE_JUDGE
 freopen("inputf.txt", "r", stdin);
 freopen("outputf.txt", "w", stdout);
#endif
}
void solve()
{
 int n;
 cin >> n;
 int store = 0, xsum = 0, ysum = 0;
 for (int i = 0; i < n; i++)
 {
  int x, y;
  cin >> x >> y;
  xsum += x;
  ysum += y;
  if ((x % 2 == 0 && y % 2 == 1) || (x % 2 == 1 && y % 2 == 0))
  {
   store++;
  }
 }
 if (xsum % 2 == 0 && ysum % 2 == 0)
 {
  cout << 0 << el;
 }
 else if ((xsum & 1) && (ysum & 1) && store)
 {
  cout << 1 << el;
 }
 else
 {
  cout << -1 << el;
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
