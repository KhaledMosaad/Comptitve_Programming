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
 cin.tie(nullptr); cout.tie(nullptr); // 0 10 25 37
#ifndef ONLINE_JUDGE
 freopen("inputf.txt", "r", stdin);
 freopen("outputf.txt", "w", stdout);
#endif
}
void solve()
{
 int n;
 cin >> n;
 vector<string> v(n);
 vii cor;
 for (int i = 0; i < n; i++) {
  cin >> v[i];
  for (int j = 0; j < n; j++)
  {
   if (v[i][j] == '*')
   {
    cor.pb({i, j});
   }
  }
 }
 if (cor[0].F != cor[1].F && cor[0].S != cor[1].S)
 {
  v[cor[0].F][cor[1].S] = '*';
  v[cor[1].F][cor[0].S] = '*';
 }
 else if (cor[0].F == cor[1].F)
 {
  if (cor[0].F < n - 1)
  {
   v[cor[0].F + 1][cor[0].S] = '*';
   v[cor[1].F + 1][cor[1].S] = '*';
  }
  else
  {
   v[cor[0].F - 1][cor[0].S] = '*';
   v[cor[1].F - 1][cor[1].S] = '*';
  }
 }
 else
 {
  if (cor[0].S < n - 1)
  {
   v[cor[0].F][cor[0].S + 1] = '*';
   v[cor[1].F][cor[1].S + 1] = '*';
  }
  else
  {
   v[cor[0].F][cor[0].S - 1] = '*';
   v[cor[1].F][cor[1].S - 1] = '*';
  }
 }
 for (int i = 0; i < n; i++)
 {
  cout << v[i] << el;
 }
}
int main() {
 fast();
 int t;
 cin >> t;
 while (t--)
  solve();
 return 0;
}
