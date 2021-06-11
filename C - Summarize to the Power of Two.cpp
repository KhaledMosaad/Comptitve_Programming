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
 int n;
 cin >> n;
 vi v(n);
 vector<bool> check(n, 0);
 map<int, int> map;
 for (int i = 0; i < n; i++) {
  cin >> v[i];
  map[v[i]]++;
 }
 int res = 0;
 for (int i = 0; i < n; i++)
 {
  bool ok = false;
  for (int j = 1; j < 32; j++)
  {
   int x = pow(2, j) - v[i];
   if (map.count(x) && (map[x] > 1 || (map[x] == 1 && x != v[i])))
   {
    ok = true;
   }
  }
  if (!ok) res++;
 }
 cout << res << endl;
}
int main() {
 fast();
 // int t;
 // cin>>t;
 // while(t--)
 solve();
 return 0;
}
