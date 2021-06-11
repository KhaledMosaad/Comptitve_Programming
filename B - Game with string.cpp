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
const int mx = 1e5 + 1;
void solve()
{
 string s;
 cin >> s;
 int n = s.length(), sum = 0;
 stack<char> st;
 for (int i = 0; i < n; i++)
 {
  if (st.empty()) {
   st.push(s[i]);
  }
  else
  {
   char t = st.top();
   if (t == s[i])
   {
    st.pop();
    sum++;
   }
   else
   {
    st.push(s[i]);
   }
  }
 }
 if (sum & 1)
 {
  cout << "YES" << el;
 }
 else
 {
  cout << "NO" << el;
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
