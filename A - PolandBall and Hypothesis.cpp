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
 ios::sync_with_stdio(0);
 cin.tie(0);
 cout.tie(0);
#ifndef ONLINE_JUDGE
 freopen("inputf.txt", "r", stdin);
 freopen("outputf.txt", "w", stdout);
#endif
}
bool prime(int a)
{
 for (int i = 2; i * i < a; i++)
 {
  if (a % i == 0) return false;
 }
 return true;
}
void solve()
{
 int n;
 cin >> n;
 for (int i = 1; i <= 1e3; i++)
 {
  if (!prime(n * i + 1))
  {
   cout << i << el;
   return ;
  }
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