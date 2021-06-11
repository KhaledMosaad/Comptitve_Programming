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
const int mx = 2e5 + 5;
ll a[mx];
void solve()
{
 int n;
 cin >> n;
 for (int i = 1; i <= n; i++)
  cin >> a[i];
 ll ans = 0;
 for (int i = 2; i <= n; i++)
  ans += abs(a[i] - a[i - 1]);
 ll mx = max(abs(a[2] - a[1]), abs(a[n] - a[n - 1]));
 for (int i = 2; i < n; i++)
 {
  mx = max(mx, abs(a[i] - a[i - 1]) + abs(a[i + 1] - a[i]) - abs(a[i + 1] - a[i - 1]));
 }
 cout << ans - mx << endl;
 
}
int main() {
 fast();
 int t;
 cin >> t;
 while (t--)
  solve();
 return 0;
}
