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
bool isvalid(int a, int b)
{
 if ((a > 0 && b > 0) || (a < 0 && b < 0)) return false;
 return true;
}
void solve()
{
 int n;
 cin >> n;
 vl v(n);
 for (int i = 0; i < n; i++)
 {
  cin >> v[i];
 }
 ll dp = 0;
 ll a = v[0];
 for (int i = 0; i < n; i++)
 {
  ll w = v[i];
  if (!isvalid(a, v[i])) {
   while (i < n && !isvalid(a, v[i]))
   {
    w = max(w, v[i]);
    i++;
   }
   i--;
  }
  dp += w;
  a = -a;
 }
 cout << dp << el;
}
int main() {
 fast();
 int t;
 cin >> t;
 while (t--)
  solve();
 return 0;
}
