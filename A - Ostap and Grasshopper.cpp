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
int c[28];
void solve()
{
 int n, k;
 cin >> n >> k;
 string s;
 cin >> s;
 if (s.find("G") < s.find("T"))
 {
  for (int i = s.find("G"); i < n; i += k)
  {
   if (s[i] == 'T')
   {
    cout << "YES" << el;
    return;
   }
   else if (s[i] == '#')
   {
    cout << "NO" << el;
    return;
   }
  }
  cout << "NO" << el;
 }
 else
 {
  for (int i = s.find("G"); i >= 0; i -= k)
  {
   if (s[i] == 'T')
   {
    cout << "YES" << el;
    return;
   }
   else if (s[i] == '#')
   {
    cout << "NO" << el;
    return;
   }
  }
  cout << "NO" << el;
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
