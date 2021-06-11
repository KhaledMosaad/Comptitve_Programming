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
void solve()
{
 int n, s;
 ll sum = 0, mx = 0, ind = 0;
 cin >> n >> s;
 for (int i = 0; i < n; ++i)
 {
  int a;
  cin >> a;
 
  if (sum <= s)
  {
   if (a > mx)
   {
    mx = a;
    ind = i + 1;
   }
  }
  sum += a;
 }
 if (sum <= s) cout << 0 << endl;
 else cout << ind << endl;
}
 
int main() {
 fast();
 int t;
 cin >> t;
 while (t--) solve();
 return 0;
}
