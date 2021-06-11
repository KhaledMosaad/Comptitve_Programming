#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;
#define all(v) v.begin(),v.end()
#define sz(v) (int)((v).size())
#define F first
#define S second
#define pb push_back
#define mp make_pair
#define el '\n'
 
typedef long long ll;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> indexed_set;
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
 int n;
 cin >> n;
 vi v(n), res(n, 0);
 for (int i = 0; i < n; i++)
 {
  cin >> v[i];
 }
 int temp = v[n - 1];
 for (int i = n - 1; i >= 0; v[i] == 0 ? i-- : i -= v[i])
 {
  temp = v[i];
  for (int j = i; j > i - v[i] && j >= 0; j--, temp--)
  {
   res[j] = 1;
   if (v[j] > temp)
   {
    i = j;
    temp = v[j];
   }
  }
 }
 for (int i = 0; i < n; i++)
 {
  cout << res[i] << " ";
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
