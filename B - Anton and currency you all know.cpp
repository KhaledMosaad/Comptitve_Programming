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
 string s;
 cin >> s;
 bool exi = false;
 int mxind = -1, mxval = 0;
 for (int i = 0; i < s.length(); i++)
 {
  if ((s[i] - '0') % 2 == 0)
  {
   exi = true;
   mxind = i;
   if (s[mxind] < s[s.length() - 1])
   {
    break;
   }
  }
 }
 if (exi) {
  swap(s[mxind], s[s.length() - 1]);
  cout << s << el;
 }
 else
 {
  cout << -1 << el;
 }
}
int main() {
 fast();
 // int t;
 // cin >> t;
 // while (t--)
 solve();
 return 0;
}
