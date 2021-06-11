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
void solve()
{
 int n, k, m;
 cin >> n >> k >> m;
 vi v(n), res, freq(2e5 + 5, 0);
 for (int i = 0; i < n; i++)
 {
  int a;
  cin >> a;
  v[i] = a;
  freq[a % m]++;
 }
 int val = -1;
 for (int i = 0; i < m; i++)
 {
  if (freq[i] >= k)
  {
   val = i;
   break;
  }
 }
 if (val == -1)
 {
  cout << "No" << el;
  return;
 }
 cout << "Yes" << el;
 int cnt = 0;
 for (int i = 0; i < n && cnt < k; i++)
 {
  if (v[i] % m == val)
  {
   cout << v[i] << " ";
   cnt++;
  }
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
