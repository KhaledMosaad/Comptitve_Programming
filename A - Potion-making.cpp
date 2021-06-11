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
void solve()
{
 int k;
 cin >> k;
 int p = k, w = 100 - k;
 if (k == 100)
 {
  cout << 1 << el;
  return;
 }
 if (w >= p)
 {
  if (w % p == 0)
  {
   w /= p;
   p = 1;
  }
  else
  {
   int m = __gcd(w, p);
   w /= m;
   p /= m;
  }
 }
 else
 {
  if (p % w == 0)
  {
   p /= w;
   w = 1;
  }
  else
  {
   int m = __gcd(w, p);
   p /= m;
   w /= m;
  }
 }
 cout << p + w << el;
}
int main() {
 fast();
 int t;
 cin >> t;
 while (t--)
  solve();
 return 0;
}
