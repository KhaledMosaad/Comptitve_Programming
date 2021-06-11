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
 string s;
 cin >> s;
 int n = s.length();
 int ar[n];
 memset(ar, 0, sizeof(ar));
 if (s[0] == s[1])
 {
  ar[0] = 1;
 }
 for (int i = 1; i < n - 1; i++)
 {
  ar[i] = (s[i] == s[i + 1]) + ar[i - 1];
 }
 ar[n - 1] = ar[n - 2];
 int m;
 cin >> m;
 for (int i = 0; i < m; i++)
 {
  int a, b, res;
  cin >> a >> b;
  if (a + 1 == b)
  {
   res = ar[a - 1];
   if (a > 1) res -= ar[a - 2];
  }
  else
  {
   res = ar[b - 2];
   if (a > 1) res -= ar[a - 2];
  }
  cout << res << el;
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
