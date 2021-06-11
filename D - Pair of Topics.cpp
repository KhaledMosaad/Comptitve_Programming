#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(),v.end()
#define sz(v) (int)((v).size())
#define F first
#define S second
#define pb push_back
#define mp make_pair
#define endl '\n'
 
typedef long long ll;
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
const int mxar = 2e5 + 5;
ll a[mxar];
void solve()
{
 ll n, res = 0;
 cin >> n;
 vi a(n), b(n), def(n);
 for (int i = 0; i < n; i++) cin >> a[i];
 for (int i = 0; i < n; i++) cin >> b[i];
 for (int i = 0; i < n; i++) def[i] = a[i] - b[i];
 sort(def.begin(), def.end());
 for (int i = 0; i < n - 1; i++)
 {
  auto x = lower_bound(def.begin() + i + 1, def.end(), 1 - def[i]);
  if (x == def.end()) continue;
  int y = (x - def.begin());
  res += (n - y);
 }
 cout << res << endl;
}
int main() {
 fast();
 // int t;
 // cin >> t;
 // while (t--)
 solve();
 return 0;
}
