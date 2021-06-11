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
bool isprime(ll n)
{
 for (ll i = 2; i * i <= n; i++)
 {
  if (n % i == 0)
  {
   return false;
  }
 }
 return true;
}
void solve()
{
 ll n;
 cin >> n;
 if (isprime(n))
 {
  cout << 1 << el << n << el;
  return ;
 }
 int ar[10] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29};
 vl k;
 ll nn = n;
 for (int j = 0; j < 10; j++) {
  n = nn;
  vl res;
  res.pb(1);
  for (ll i = ar[j]; i * i <= n;)
  {
   if (n % i == 0 && (n / i) % i == 0 && i % res[res.size() - 1] == 0)
   {
    res.pb(i);
    n /= i;
   }
   else
   {
    i++;
   }
  }
  res.pb(n);
  if (res.size() > k.size())
  {
   k = res;
  }
 }
 cout << k.size() - 1 << el;
 for (int i = 1; i < k.size(); i++)
 {
  cout << k[i] << " ";
 }
 cout << el;
}
int main() {
 fast();
 int t;
 cin >> t;
 while (t--)
  solve();
 return 0;
}
