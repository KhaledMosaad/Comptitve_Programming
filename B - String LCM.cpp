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
 
bool isvalid(string s, string t)
{
 if (s.length() % t.length() != 0)
 {
  return false;
 }
 for (int i = 0; i < s.length(); i++)
 {
  if (s[i] != t[i % t.length()]) return false;
 }
 return true;
}
void solve()
{
 string s, t;
 cin >> s >> t;
 if (s.length() < t.length())
 {
  swap(s, t);
 }
 for (int i = t.length(); i > 0; i--)
 {
  string temp = t.substr(0, i);
  if (isvalid(s, temp) && isvalid(t, temp))
  {
   //cout << temp << el;
   int len = t.length() * s.length() / temp.length();
   string res = "";
   while (res.length() < len) {
    cout << temp;
    res += temp;
   }
   cout << el;
   return;
  }
 }
 cout << -1 << el;
 
}
int main() {
 fast();
 int t;
 cin >> t;
 while (t--)
  solve();
 return 0;
}
