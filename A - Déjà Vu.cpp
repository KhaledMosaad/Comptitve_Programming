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
bool isplinde(string s)
{
 int n = s.length();
 for (int i = 0; i < n / 2; i++)
 {
  if (s[i] != s[n - i - 1])
  {
   return false;
  }
 }
 return true;
}
void solve()
{
 string s;
 cin >> s;
 int n = s.length();
 bool ok = false;
 for (int i = 0; i < n; i++)
 {
  if (s[i] != 'a')
  {
   ok = true;
  }
 }
 if (!ok)
 {
  cout << "No" << el;
 }
 else
 {
  cout << "Yes" << el;
  if (!isplinde(string("a" + s)))
  {
   cout << string("a" + s) << el;
  }
  else cout << string(s + "a") << el;
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
