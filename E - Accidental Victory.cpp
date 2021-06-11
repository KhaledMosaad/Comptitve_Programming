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
const int mx = 2e5 + 5;
ll n;
vl v, vv, freq;
bool ok(int mid)
{
 if (mid >= n) mid = n - 1;
 ull w = freq[mid];
 for (int i = mid + 1; i < n; i++)
 {
  if (v[i] > w)
  {
   return false;
  }
  else
  {
   w += v[i];
  }
 }
 return true;
}
ll bi()
{
 ll ans = -1;
 for (int b = n; b >= 1; b /= 2)
 {
  while (!ok(ans + b)) ans += b;
 }
 return ans + 1;
}
void solve()
{
 cin >> n;
 v = vl(n);
 freq = vl(n);
 vv = vl(n);
 for (int i = 0; i < n; i++) cin >> vv[i];
 v = vv;
 sort(v.begin(), v.end());
 freq[0] = v[0];
 for (int i = 1; i < n; i++)
 {
  freq[i] = freq[i - 1] + v[i];
 }
 int anss = bi();
 cout << n - anss << el;
 for (int i = 0; i < n; i++)
 {
  if (vv[i] >= v[anss])
  {
   cout << i + 1 << " ";
  }
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
