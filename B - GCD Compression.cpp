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
 cin.tie(nullptr); cout.tie(nullptr);
#ifndef ONLINE_JUDGE
 freopen("inputf.txt", "r", stdin);
 freopen("outputf.txt", "w", stdout);
#endif
}
const int mx = 1e6 + 1;
pair<int, int> ind[mx];
void solve()
{
 int n;
 cin >> n;
 vi v(2 * n);
 bool istaken[2 * n];
 memset(istaken, 0, sizeof(istaken));
 int odd = 0, even = 0;
 for (int i = 0; i < 2 * n; i++)
 {
  cin >> v[i];
  if (v[i] & 1)
   odd++;
  else even++;
 }
 if (odd & 1)
 {
  for (int i = 0; i < 2 * n; i++)
  {
   if (v[i] & 1)
   {
    istaken[i] = true;
    break;
   }
  }
 }
 int res = 0;
 for (int i = 0; i < 2 * n; i++)
 {
  if (!istaken[i])
  {
   for (int j = i + 1; j < 2 * n; j++)
   {
    if (!istaken[j])
    {
     if ((v[i] % 2 == 1 && v[j] % 2 == 1) || (v[i] % 2 == 0 && v[j] % 2 == 0))
     {
      res += 2;
      istaken[i] = true;
      istaken[j] = true;
      cout << i + 1 << " " << j + 1 << el;
      break;
     }
    }
   }
   if (res == 2 * n - 2)
   {
    return;
   }
  }
 }
}
int main() {
 fast();
 int t;
 cin >> t;
 while (t--)
  solve();
 return 0;
}
