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
 int n;
 cin >> n;
 vl v(n + 3), freq(n + 3, 0);
 for (int i = 1; i <= n + 2; i++)
 {
  cin >> v[i];
 }
 sort(v.begin(), v.end());
 for (int i = 1; i <= n + 2; i++)
 {
  freq[i] = freq[i - 1] + v[i];
 }
 int x = -1;
 bool ok = false;
 for (int i = 1; i <= n + 1; i++)
 {
  x = v[i];
  if (v[n + 2] == freq[n + 1] - x)
  {
   ok = true;
   break;
  }
 }
 if (ok)
 {
  bool okk = true;
  for (int i = 1; i <= n + 1; i++)
  {
   if (okk && v[i] == x)
   {
    okk = false;
    continue;
   }
   cout << v[i] << " ";
  }
  cout << el;
  return;
 }
 else
 {
  if (freq[n] == freq[n + 1] - freq[n])
  {
   for (int i = 1; i <= n; i++ )
   {
    cout << v[i] << " ";
   }
   cout << el;
  }
  else
  {
   cout << -1 << el;
  }
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
