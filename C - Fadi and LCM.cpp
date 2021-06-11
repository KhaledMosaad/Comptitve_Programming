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
ll gcd(ll a, ll b)
{
 return (b == 0) ? a : gcd(b, a % b);
}
void solve()
{
 ll x;
 cin >> x;
 ll res = x, res2 = 1;
 for (ll i = 1; i * i <= x; i++)
 {
  if (x % i == 0)
  {
   if (gcd(i, x / i) == 1)
   {
    if (res > min(res, max(i, x / i))) {
     res = max(i, x / i);
     res2 = min(i, x / i);
    }
   }
  }
 }
 cout << res2 << " " << res << endl;
}
int main() {
 fast();
 // int t;
 // cin >> t;
 // while (t--)
 solve();
 return 0;
}
