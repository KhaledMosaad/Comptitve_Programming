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
 int n;
 cin >> n;
 vector<string> v(n);
 for (int i = 0; i < n; i++)
 {
  cin >> v[i];
  while (v[i].find("kh") != string::npos)
  {
   auto f = v[i].find("kh");
   v[i].replace(f, 2, "h");
  }
  while (v[i].find("u") != string::npos)
  {
   auto f = v[i].find("u");
   v[i].replace(f, 1, "oo");
  }
 }
 sort(v.begin(), v.end());
 int res = 1;
 for (int i = 1; i < sz(v); i++)
 {
  if (v[i] != v[i - 1]) res++;
  //cout << v[i] << endl;
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
