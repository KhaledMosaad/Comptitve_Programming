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
 if (a <= 1) return b;
 return gcd(b, a % b);
}
ll sumdig(ll n)
{
 ll sum = 0;
 while (n)
 {
  int r = n % 10;
  sum += r;
  n /= 10;
 }
 return sum;
}
void solve()
{
 ll n;
 cin >> n;
 for (ll i = n; i <= 2e18; i++)
 {
  if (__gcd(i, sumdig(i)) > 1)
  {
   cout << i << el;
   return;
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
