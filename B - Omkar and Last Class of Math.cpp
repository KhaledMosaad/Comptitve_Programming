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
ll fun(ll m)
{
 for (ll i = 2; i * i <= m; i++)
 {
  if (m % i == 0)
  {
   if (m / i != i)
   {
    return i;
   }
  }
 }
 return 0;
}
void solve()
{
 ll n;
 cin >> n;
 for (ll i = 2; i * i <= n; i++)
 {
  if (n % i == 0)
  {
   cout << n / i << " " << n - n / i << el;
   return;
  }
 }
 cout << 1 << " " << n - 1 << el;
}
int main() {
 fast();
 int t;
 cin >> t;
 while (t--)
  solve();
 return 0;
}
