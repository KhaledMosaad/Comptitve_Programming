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
 string s1, s2, s3;
 cin >> s1 >> s2 >> s3;
 for (int i = 0; i < s3.length(); i++)
 {
  c[s3[i] - 'A']++;
 }
 if (s1.length() + s2.length() != s3.length())
 {
  cout << "NO" << el;
  return;
 }
 for (int i = 0; i < s1.length(); i++)
 {
  if (c[s1[i] - 'A'] > 0) c[s1[i] - 'A']--;
  else
  {
   cout << "NO" << el;
   return;
  }
 }
 for (int i = 0; i < s2.length(); i++)
 {
  if (c[s2[i] - 'A'] > 0) c[s2[i] - 'A']--;
  else
  {
   cout << "NO" << el;
   return;
  }
 }
 cout << "YES" << el;
}
int main() {
 fast();
 // int t;
 // cin >> t;
 // while (t--)
 solve();
 return 0;
}
