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
typedef vector<vl> vvl;
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
bool cmp(vl &a, vl &b)
{
 return a.size() < b.size();
}
void solve()
{
 int n;
 cin >> n;
 vvl v(2e5 + 1);
 vl temp(n), ans(n);
 for (int i = 0; i < n; i++)
 {
  cin >> temp[i];
  --temp[i];
 }
 for (int i = 0; i < n; i++)
 {
  int a;
  cin >> a;
  v[temp[i]].pb(a);
 }
 for (int i = 0; i < n; i++)
 {
  sort(v[i].rbegin(), v[i].rend());
 }
 for (int i = 0; i < n; i++)
 {
  for (int j = 1; j < v[i].size(); j++)
  {
   v[i][j] += v[i][j - 1];
  }
 }
 for (int i = 0; i < n; i++)
 {
  for (int k = 1; k <= v[i].size(); k++)
  {
   ans[k - 1] += v[i][v[i].size() / k * k - 1];
  }
 }
 for (int i = 0; i < n; i++)
  cout << ans[i] << " ";
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
