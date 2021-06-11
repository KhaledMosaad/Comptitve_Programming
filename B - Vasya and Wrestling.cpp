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
 ll sum1 = 0, sum2 = 0;
 cin >> n;
 vi pos, neg;
 int a;
 for (int i = 0; i < n; i++) {
  cin >> a;
  if (a > 0) {
   sum1 += a;
   pos.pb(a);
  }
  else {
   sum2 -= a;
   neg.pb(-a);
  }
 }
 if (sum1 == sum2) {
  for (int i = 0; i < min(neg.size(), pos.size()); i++)
  {
   if (pos[i] == neg[i]) continue;
   else if (pos[i] > neg[i])
   {
    cout << "first" << el;
    return;
   }
   else
   {
    cout << "second" << el;
    return;
   }
  }
  if (a > 0)
  {
   cout << "first" << el;
  }
  else cout << "second" << el;
 }
 else if (sum1 > sum2)
 {
  cout << "first" << el;
 }
 else
 {
  cout << "second" << el;
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
