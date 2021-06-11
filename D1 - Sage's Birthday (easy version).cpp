#include <bits/stdc++.h>
//#include <ext/pb_ds/assoc_container.hpp>
//using namespace __gnu_pbds;
using namespace std;
#define all(v) v.begin(),v.end()
#define sz(v) (int)((v).size())
#define F first
#define S second
#define pb push_back
#define mp make_pair
#define el '\n'
 
typedef long long ll;
//typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> indexed_set;
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
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr); cout.tie(nullptr); // 0 10 25 37
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
 for (int i = 0; i < n; i++) cin >> v[i];
 sort(v.begin(), v.end());
 vi res(n);
 if (n & 1)
 {
  for (int i = n / 2, j = 0, w = 0; w < n; w++)
  {
   if (w % 2 == 0)
   {
    res[w] = v[i];
    i++;
   }
   else
   {
    res[w] = v[j];
    j++;
   }
  }
 }
 else
 {
  for (int i = n / 2 - 1, j = 0, w = 0; w < n - 1; w++)
  {
   if (w % 2 == 0)
   {
    res[w] = v[i];
    i++;
   }
   else
   {
    res[w] = v[j];
    j++;
   }
  }
  res[n - 1] = v[n - 1];
 }
 int ans = 0;
 for (int i = 1; i < n - 1; i++)
 {
  if (res[i] < res[i - 1] && res[i] < res[i + 1])
  {
   ans++;
  }
 }
 cout << ans << el;
 for (int i = 0; i < n; i++)
 {
  cout << res[i] << " ";
 }
 cout << el;
}
int main() {
 fast();
 // int t;
 // cin >> t;
 // while (t--)
 solve();
 return 0;
}
