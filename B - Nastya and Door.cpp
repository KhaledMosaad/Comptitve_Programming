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
void solve()
{
 int n, k;
 cin >> n >> k;
 vector<int>  v(n), peaks;
 for (int i = 0; i < n; i++) {
  cin >> v[i];
 }
 for (int i = 1; i < n - 1; i++) {
  if (v[i] > v[i - 1] && v[i] > v[i + 1]) {
   peaks.pb(i);
  }
 }
 if (peaks.size() == 0)
 {
  cout << 1 << " " << 1 << endl;
  return;
 }
 int l = max(peaks[0] + 3 - k, 1) , t = 1, s = 0, e = 0, temp = 1;
 while (e != peaks.size())
 {
  if (peaks[e] - peaks[s] < k - 2) {
   temp++;
   if (temp > t)
   {
    t = temp;
    l = max(peaks[s] + 3 - (k - (peaks[e] - peaks[s])), 1);
   }
   e++;
  }
  else
  {
   temp--;
   s++;
  }
 }
 cout << t << " " << l << endl;
}
 
int main() {
 fast();
 int t;
 cin >> t;
 while (t--) solve();
 return 0;
}
