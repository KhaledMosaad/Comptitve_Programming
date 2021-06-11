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
int i8[8] = {0, -1, 0, 1, -1, -1, 1, 1};
int j8[8] = { -1, 0, 1, 0, -1, 1, 1, -1};
int i4[4] = {0, -1, 0, 1};
int j4[4] = { -1, 0, 1, 0};
void fast() {
 ios::sync_with_stdio(0);
 cin.tie(0);
 cout.tie(0);
#ifndef ONLINE_JUDGE
 freopen("inputf.txt", "r", stdin);
 freopen("outputf.txt", "w", stdout);
#endif
}
void solve()
{
 int n, a, b;
 cin >> n >> a >> b;
 string s;
 cin >> s;
 vi v;
 if (s[0] == '*')
  v.pb(0);
 else v.pb(1);
 for (int i = 1; i < n; i++)
 {
  if (s[i] == '.') v[v.size() - 1]++;
  else v.pb(0);
 }
 int res = 0;
 for (int i = 0; i < v.size(); i++)
 {
  if (v[i] != 0)
  {
   if (v[i] & 1)
   {
    if (a >= b)
    {
     res += (min(v[i] / 2 + 1, a) + min(v[i] / 2, b));
     a -= min(v[i] / 2 + 1, a);
     b -= min(v[i] / 2, b);
    }
    else
    {
     res += (min(v[i] / 2 + 1, b) + min(v[i] / 2, a));
     a -= min(v[i] / 2, a);
     b -= min(v[i] / 2 + 1, b);
    }
   }
   else
   {
    res += (min(v[i] / 2, a) + min(v[i] / 2, b));
    a -= min(v[i] / 2, a);
    b -= min(v[i] / 2, b);
   }
  }
 }
 cout << res << endl;
}
int main() {
 fast();
 //int t;
 //cin >> t;
 //while (t--)
 solve();
 return 0;
}
