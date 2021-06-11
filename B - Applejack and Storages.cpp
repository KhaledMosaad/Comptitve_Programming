#include <bits/stdc++.h>
using namespace std;
#define all(v) (v.begin(),v.end())
#define sz(v) ((int)((v).size()))
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
int a[mx];
void solve()
{
 int n, sum2 = 0, sum4 = 0;
 cin >> n;
 int x;
 for (int i = 0; i < n; i++)
 {
  cin >> x;
  sum2 -= a[x] / 2;
  sum4 -= a[x] / 4;
  a[x]++;
  sum2 += a[x] / 2;
  sum4 += a[x] / 4;
 }
 int q;
 char t;
 cin >> q;
 for (int i = 0; i < q; i++)
 {
  cin >> t >> x;
  sum2 -= a[x] / 2;
  sum4 -= a[x] / 4;
  if (t == '+') a[x]++;
  else a[x]--;
  sum2 += a[x] / 2;
  sum4 += a[x] / 4;
  if (sum4 >= 1 && sum2 >= 4) cout << "Yes" << endl;
  else cout << "No" << endl;
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
