#include <bits/stdc++.h>
using namespace std;
#define all(v) (v.begin(),v.end())
#define sz(v) ((int)((v).size()))
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
vul v(1e5 + 1);
void solve()
{
 int n;
 string s;
 cin >> n >> s;
 vii v(n);
 for (int i = 0; i < n; i++)
 {
  cin >> v[i].F >> v[i].S;
 }
 int res = 0;
 for (int i = 0; i < n; i++)
 {
  res += (s[i] == '1');
 }
 vector<string > temp(n, "");
 for (int i = 0; i < n; i++)
 {
  bool light = (s[i] == '1');
  for (int j = 0; j < v[i].S; j++)
  {
   temp[i] += (light ? '1' : '0');
  }
  for (int j = v[i].S; temp[i].length() <= 250; j += v[i].F)
  {
   light = !light;
   temp[i] += (light ? string(v[i].F, '1') :  string( v[i].F, '0'));
  }
 }
 for (int i = 0; i <= 250; i++)
 {
  int t = 0;
  for (int j = 0; j < n; j++)
  {
   if (temp[j][i] == '1') t++;
  }
  res = max(res, t);
 }
 cout << res << endl;
}
int main() {
 fast();
 // int t;
 // cin >> t;
 // while (t--)
 solve();
 return 0;
}
