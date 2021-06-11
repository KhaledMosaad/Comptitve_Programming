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
 cin.tie(nullptr); cout.tie(nullptr);
#ifndef ONLINE_JUDGE
 freopen("inputf.txt", "r", stdin);
 freopen("outputf.txt", "w", stdout);
#endif
}
bool isprime(ll n)
{
 ll i;
 for (i = 2; i * i < n; i++)
 {
  if (n % i == 0) return false;
 }
 if (i * i == n) return false;
 return true;
}
vector<bool> s(1e5 + 1, 1);
vl primes;
void seive()
{
 s[0] = 0;
 s[1] = 0;
 for (int i = 2; i * i <= 1e5; i++)
 {
  if (s[i]) {
   for (int j = i * i; j <= 1e5; j += i)
   {
    s[j] = false;
   }
  }
 }
 for (int i = 2; i <= 1e5; i++)
 {
  if (s[i])
   primes.pb(i);
 }
}
void solve()
{
 ll n;
 cin >> n;
 if (n % 2 == 0)
 {
  cout << n / 2 << el;
 }
 else if (isprime(n))
 {
  cout << 1 << el;
 }
 else
 {
  seive();
  for (int i = 0; i < primes.size(); i++)
  {
   if (n % primes[i] == 0)
   {
    n -= primes[i];
    break;
   }
  }
  cout << n / 2 + 1 << el;
 }
}
int main() {
 fast();
 // int t;
 // cin >> t;
 // while (t--)
 solve();
 return 0;
}
