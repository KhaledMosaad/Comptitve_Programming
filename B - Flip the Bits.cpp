#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(),v.end()
#define sz(v) (int)((v).size())
#define F first
#define S second
#define pb push_back
#define mp make_pair
#define el '\n'
 
typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;
typedef pair<int, int> pii;
typedef pair< ll, ll> pll;
typedef vector<pll> vll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<ull> vul;
typedef vector<pii> vii;
typedef vector<vi> vvi;
 
void fast() {
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr); cout.tie(nullptr);
#ifndef ONLINE_JUDGE
 freopen("inputf.txt", "r", stdin);
 freopen("outputf.txt", "w", stdout);
#endif
}
void solve()
{
 int n;
 cin >> n;
 string s, t;
 cin >> s >> t;
 int sone[n], szero[n] , a = 0, b = 0;
 memset(sone, 0, sizeof(sone));
 memset(szero, 0, sizeof(szero));
 for (int i = 0; i < n; i++) {
  a += (s[i] == '1');
  b += (s[i] == '0');
  sone[i] = a;
  szero[i] = b;
 }
 int def = 0;
 for (int i = n - 1; i >= 0;)
 {
  if (s[i] != t[i]) {
   if (def % 2 == 0) {
    def++;
    if (sone[i] != szero[i])
    {
     cout << "No" << el;
     return;
    }
   }
   while (i >= 0 && s[i] != t[i])
    i--;
  }
  else
  {
   if (def & 1) {
    def++;
    if (sone[i] != szero[i])
    {
     cout << "No" << el;
     return;
    }
   }
   while (i >= 0 && s[i] == t[i])
    i--;
  }
 }
 cout << "Yes" << el;
}
int main() {
 fast();
 int t;
 cin >> t;
 while (t--)
  solve();
 return 0;
}
