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
int stringtoint(int a, int b)
{
 string s = string(a, b + '0');
 int res = 0;
 for (int i = 0; i < s.length(); i++)
 {
  res *= 10;
  res += (s[i] - '0');
 }
 return res;
}
int len(int a)
{
 int l = 0;
 while (a)
 {
  a /= 10;
  l++;
 }
 return l;
}
void solve()
{
 int n;
 cin >> n;
 vi v(n * n + 1, 0);
 if (n == 1)
 {
  cout << 1 << el;
 }
 else if (n == 2)
 {
  cout << -1 << el;
 }
 else
 {
  for (int i = 0, j = 1, w = 0; i < n * n; w++, i += 2, j += 2)
  {
   v[i] = w + 1;
   v[j] = n * n - w;
  }
  swap(v[0], v[n * n - 1]);
  for (int i = 0; i < n * n; i++)
  {
   cout << v[i] << " ";
   if ((i + 1) % n == 0) cout << el;
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
