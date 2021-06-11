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
vector<bool> a(1e5 + 1, 1);
vi primes;
void seive()
{
 a[0] = false;
 a[1] = false;
 for (ll i = 2; i <= 1e5; i++)
 {
  if (a[i])
  {
   for (ll j = i * i; j <= 1e5; j += i)
   {
    a[j] = false;
   }
  }
 }
 for (int i = 2; i <= 1e5; i++)
 {
  if (a[i])
   primes.pb(i);
 }
}
void solve()
{
 int n, m;
 cin >> n >> m;
 vvi v(n, vi(m));
 seive();
 ll temp = 0, res = 1e9;
 primes.pb(100003);
 for (int i = 0; i < n; i++)
 {
  for (int j = 0; j < m; j++)
  {
   cin >> v[i][j];
   int w = lower_bound(primes.begin(), primes.end(), v[i][j]) - primes.begin();
   temp += (primes[w] - v[i][j]);
  }
  res = min(res, temp);
  temp = 0;
 }
 for (int i = 0; i < m; i++)
 {
  for (int j = 0; j < n; j++)
  {
   int w = lower_bound(primes.begin(), primes.end(), v[j][i]) - primes.begin();
   temp += (primes[w] - v[j][i]);
  }
  res = min(res, temp);
  temp = 0;
 }
 cout << res << el;
}
int main() {
 fast();
 // int t;
 // cin >> t;
 // while (t--)
 solve();
 return 0;
}
