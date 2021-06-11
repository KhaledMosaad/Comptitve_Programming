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
void solve()
{
 ll n;
 cin >> n;
 vl v(n);
 for (int i = 0; i < n; i++)
  cin >> v[i];
 ll res = 1, temp = 1;
 for (ll i = 1; i < n; i++)
 {
  if (v[i] <= 2 * v[i - 1])
  {
   temp++;
  }
  else
  {
   res = max(res, temp);
   ll w = (v[i] & 1) ? (v[i] / 2 + 1) : (v[i] / 2);
   ll ind = lower_bound(v.begin(), v.end(), w) - v.begin();
   temp = i - ind + 1;
  }
 }
 res = max(res, temp);
 cout << res << el;
}
int main() {
 fast();
 // int t;
 // cin >> t;
 // while (t--)
 solve();
 return 0;
}
