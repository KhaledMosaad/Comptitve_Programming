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
 int a, b;
 cin >> a >> b;
 if (a == 1 || b == 1)
 {
  cout << "Finite" << el;
  return;
 }
 else if (a == b)
 {
  cout << "Infinite" << el;
  return;
 }
 else
 {
  if (a > b) swap(a, b);
  bool infinite = false;
  for (int i = 2; i <= a; i++)
  {
   if (a % i == 0 && b % i == 0)
   {
    infinite = true;
    break;
   }
  }
  if (infinite)
  {
   cout << "Infinite" << el;
  }
  else
   cout << "Finite" << el;
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
