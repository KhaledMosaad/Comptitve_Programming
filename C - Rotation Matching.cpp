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
 int n;
 cin >> n;
 for (int i = 1; i <= n; i++)
 {
  int b;
  cin >> b;
  a[b] = i;
 }
 int l[n + 1], r[n + 1];
 memset(l, 0, sizeof(l));
 memset(r, 0, sizeof(r));
 for (int i = 1; i <= n; i++)
 {
  int b;
  cin >> b;
  l[(a[b] - i + n) % n]++;
  r[(i - a[b] + n) % n]++;
 
 
 }
 cout << max(*max_element(l, l + n + 1), *max_element(r, r + n + 1)) << endl;
}
int main() {
 fast();
 // int t;
 // cin >> t;
 // while (t--)
 solve();
 
 return 0;
}
