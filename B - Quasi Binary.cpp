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
const int maxmum = 2e5 + 5;
void solve()
{
 int n;
 cin >> n;
 vector<string> res;
 while (n > 0)
 {
  string s = to_string(n), temp = "";
  for (int i = 0; i < s.length(); i++)
  {
   if (s[i] >= '1')
   {
    temp += "1";
   }
   else
   {
    temp += "0";
   }
  }
  res.pb(temp);
  stringstream w(temp);
  int x = 0;
  w >> x;
  //cout << x << " " << n << el;
  n -= x;
 }
 cout << res.size() << el;
 for (int i = 0; i < res.size(); i++)
 {
  cout << res[i] << " ";
 }
 cout << el;
}
int main() {
 fast();
 // int t;
 // cin >> t;
 // while (t--)
 solve();
 return 0;
}
