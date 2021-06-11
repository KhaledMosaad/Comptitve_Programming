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
string yes = "YES", no = "NO";
void solve()
{
 int n;
 cin >> n;
 if (n == 1)
 {
  cout << yes << el;
  cout << 1 << " " << 2 << el;
  return;
 }
 n *= 2;
 if (((n * (n + 1) / 2) - 3) % 2 == 0)
 {
  cout << yes << el;
  cout << 1 << " ";
  for (int i = 4; i < n; i += 4)
  {
   cout << i << " " << i + 1 << " ";
  }
  for (int i = 2; i < n; i += 4)
  {
   cout << i << " " << i + 1 << " ";
  }
  cout << n << el;
 }
 else
 {
  cout << no << el;
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
