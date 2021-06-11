#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(),v.end()
#define sz(v) (int)((v).size())
#define F first
#define S second
#define pb push_back
#define mp make_pair
#define endl '\n'
 
typedef long long ll;
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
const int mx = 2e5 + 5;
ll a[mx];
void solve()
{
 string s;
 cin >> s;
 int z = 0, o = 0, res = 0;
 for (int i = 1; i < s.length() - 1; i++)
 {
  if (s[i] == '0') z++;
  else o++;
 }
 int n = s.length();
 if (s[0] == s[s.length() - 1])
 {
  if (s[0] == '0') z += 2;
  else o += 2;
 }
 res = min(o, z);
 for (int i = 0; i < n; i++)
 {
  int temp = 0, temp2 = 0, j;
  for (j = 0; j <= i; j++)
  {
   if (s[j] == '0') temp++;
   else temp2++;
  }
  j++;
  for (; j < n; j++)
  {
   if (s[j] == '1') temp++;
   else temp2++;
  }
  res = min(res, temp);
  res = min(res, temp2);
 }
 cout << res << endl;
}
int main() {
 fast();
 int t;
 cin >> t;
 while (t--)
  solve();
 return 0;
}
