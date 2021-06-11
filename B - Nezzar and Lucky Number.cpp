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
 int q, d;
 cin >> q >> d;
 vi ds;
 for (int i = d; i < d * 10; i += 10)
 {
  ds.pb(i);
  //cout << i << el;
 }
 for (int i = 0; i < q; i++)
 {
  int w;
  cin >> w;
  if (w >= d * 10)
  {
   cout << "Yes" << el;
  }
  else
  {
   bool ok = false;
   for (int j = 0; j < ds.size() && !ok; j++)
   {
    if (w % ds[j] == 0)
    {
     ok = true;
     break;
    }
    else
    {
     int m = w - ds[j];
     for (int k = 0; k < j; k++)
     {
      if (m % ds[k] == 0 && m > 0)
      {
       ok = true;
       break;
      }
     }
    }
   }
   if (ok)
   {
    cout << "Yes" << el;
   }
   else
   {
    cout << "No" << el;
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
