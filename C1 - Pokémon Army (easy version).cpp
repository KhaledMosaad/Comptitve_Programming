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
 int n, q;
 cin >> n >> q;
 vi v(n);
 int mx = 0, ind = 0;
 for (int i = 0; i < n; i++)
 {
  cin >> v[i];
 }
 for (int i = n - 1; i >= 0; i--)
 {
  if (v[i] >= mx)
  {
   mx = v[i];
   ind = i;
  }
  else if (v[i] < mx)
  {
   break;
  }
 }
 //cout << ind << el;
 ll res = mx, mi = v[ind - 1], temp = 1e9;
 for (int i = ind - 2; i >= 0; i--)
 {
  if (v[i] > temp)
  {
   res += (v[i] - temp);
   temp = v[i];
  }
  else if (v[i] < mi || temp != 1e9)
  {
   mi = v[i];
   temp = 1e9;
  }
  else if (v[i] > mi)
  {
   res -= mi;
   res += v[i];
   temp = v[i];
  }
 }
 cout << res << el;
}
int main() {
 fast();
 int t;
 cin >> t;
 while (t--)
  solve();
 return 0;
}
