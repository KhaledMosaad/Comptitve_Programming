#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(),v.end()
#define sz(v) (int)((v).size())
#define F first
#define S second
#define pb push_back
#define mp make_pair
#define el '\n'
 
typedef long long ll;
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
ll w[200000], mo = 1e9 + 7;
ll mod(ll k)
{
 return (k + 3 * mo) % mo;
}
void solve()
{
 ll n, ind = -1;
 cin >> w[0] >> w[1];
 cin >> n; // 1 2 1 -1 -2 -1 1 2
 for (int i = 1; i < 200000 - 1; i++)
 {
  int m = w[i] - w[i - 1];
  if (w[i] == w[0] && m == w[1]) {
   ind = i;
   break;
  }
  w[i + 1] = m;
 }
 cout << mod(w[(n - 1) % ind]) << el;
}
int main() {
 fast();
 // int t;
 // cin >> t;
 // while (t--)
 solve();
 return 0;
}
