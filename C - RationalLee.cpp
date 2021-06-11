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
 int n, k;
 cin >> n >> k;
 vi v(n), w(k);
 for (int i = 0; i < n; i++) {
  cin >> v[i];
 }
 for (int i = 0; i < k; i++) {
  cin >> w[i];
 }
 sort(w.begin(), w.end());
 sort(v.rbegin(), v.rend());
 int s = 0;
 ll res = 0;
 int i = 0, j = n - 1;
 for (int s = 0; s < k; s++)
 {
  if (w[s] == 1) res += 2 * v[i++];
  else break;
 }
 
 sort(w.rbegin(), w.rend());
 for (int m = 0; m < k; m++)
 {
  if (w[m] == 1)
  {
   break;
  }
  else if (w[m] == 2)
  {
   res += v[i];
   i++;
   res += v[i];
   i++;
  }
  else
  {
   res += v[i];
   i++;
   res += v[j];
   j -= (w[m] - 1);
  }
 }
 cout << res << endl;
}
int main() {
 fast();
 int t;
 cin >> t;
 while (t--)
  solve();
 return 0;
}
