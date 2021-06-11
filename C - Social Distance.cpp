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
int dp[200000], a[200000], n, k;
string s;
int main() {
 fast();
 int tt;
 cin >> tt;
 while (tt--) {
  cin >> n >> k;
  cin >> s;
  int t = 1e6;
  for (int i = n - 1; i >= 0; i--) {
 
   if (s[i] == '1') {
    t = 0;
   }
   else {
    t++;
   }
   dp[i] = t;
  }
 
  int sum = 0;
  for (int i = 0; i < n; i++) {
   if (s[i] == '0') {
    if (dp[i] > k)sum++, i += k;
   }
   else i += k;
  }
  cout << sum << endl;
 
 
 }
 return 0;
}
