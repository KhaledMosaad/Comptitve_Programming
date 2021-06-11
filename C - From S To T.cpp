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
int cnt[30];
void solve()
{
 string s, t, p;
 cin >> s >> t >> p;
 memset(cnt, 0, sizeof(cnt));
 for (auto i : p)
  ++cnt[i - 'a'];
 int is = 0, it = 0;
 bool ok = true;
 while (is < s.length())
 {
  if (it == t.length())
  {
   ok = false;
   break;
  }
  if (s[is] == t[it])
  {
   is++, it++;
  }
  else
  {
   cnt[t[it] - 'a']--;
   it++;
  }
 }
 while (it < t.length())
 {
  --cnt[t[it] - 'a'];
  it++;
 }
 if (*min_element(cnt, cnt + 30) < 0)
 {
  ok = false;
 }
 if (ok) cout << "Yes" << endl;
 else cout << "No" << endl;
}
int main() {
 fast();
 int t;
 cin >> t;
 while (t--)
  solve();
 return 0;
}
