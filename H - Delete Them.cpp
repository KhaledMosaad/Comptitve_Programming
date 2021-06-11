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
bool match(string s1, string s2)
{
 for (int j = 0; j < s1.length(); j++)
 {
  if (s1[j] != '?' && s1[j] != s2[j])
  {
   return false;
  }
 }
 return true;
}
void solve()
{
 int n, m;
 cin >> n >> m;
 vector<string> v(n);
 vi ms(m);
 for (int i = 0; i < n; i++) {
  cin >> v[i];
 }
 for (int i = 0; i < m; i++)
 {
  cin >> ms[i];
 }
 bool ok = true;
 for (int i = 1; i < m; i++)
 {
  if (v[ms[i] - 1].length() != v[ms[i - 1] - 1].length()) ok = false;
 }
 if (!ok) cout << "No" << endl;
 else
 {
 
  string res = v[ms[0] - 1];
 
  for (int j = 1; j < m; j++)
  {
   for (int k = 0; k < v[ms[0] - 1].length(); k++)
   {
    if (res[k] != v[ms[j] - 1][k])
    {
     res[k] = '?';
    }
   }
  }
  bool ex = true;
  for (int i = 0; i < n; i++)
  {
   if (!binary_search(ms.begin(), ms.end(), i + 1) && v[i].length() == res.length())
   {
    if (match(res, v[i]))
    {
     ex = false;
    }
   }
  }
  if (ex)
  {
   cout << "Yes" << endl;
   cout << res << endl;
  }
  else
  {
   cout << "No" << endl;
  }
 }
 
 
}
int main() {
 fast();
 //int t;
 //cin >> t;
 //while (t--)
 solve();
 return 0;
}
