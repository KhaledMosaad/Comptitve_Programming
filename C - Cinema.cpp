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
map <int, int> mi;
void solve()
{
 int n;
 cin >> n;
 for (int i = 1; i <= n; i++)
 {
  int a;
  cin >> a;
  mi[a]++;
 }
 int m;
 cin >> m;
 int res = 0, ind = 1, ai = 0, bi = 0;
 vi as(m), bs(m);
 for (int i = 0; i < m; i++)
 {
  cin >> as[i];
 
 }
 for (int i = 0; i < m; i++)
 {
  cin >> bs[i];
 }
 for (int i = 1; i <= m; i++)
 {
  int a, b;
  a = as[i - 1], b = bs[i - 1];
  if (mi[a] > res || (mi[a] == res && mi[b] > bi)) {
   res = mi[a];
   bi = mi[b];
   ind = i;
  }
 }
 cout << ind << endl;
}
int main() {
 fast();
 // int t;
 // cin >> t;
 // while (t--)
 solve();
 return 0;
}
