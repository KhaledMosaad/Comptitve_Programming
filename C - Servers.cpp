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
void solve()
{
 int n, q;
 cin >> n >> q;
 vector < pair<pair<int , int >, int> > v(q);
 vi ser(n + 1, 0);
 vi res(q);
 for (int i = 0; i < q; i++)
 {
  cin >> v[i].F.F >> v[i].F.S >> v[i].S;
 }
 for (int i = 0; i < q; i++)
 {
  int time = v[i].F.F + v[i].S, cnt = 0, r = 0;
  for (int j = 1; j <= n; j++)
  {
   if (ser[j] <= v[i].F.F) {
    cnt++;
   }
  }
  if (cnt >= v[i].F.S)
  {
   int temp = 0;
   for (int w = 1; w <= n; w++)
   {
    if (ser[w] <= v[i].F.F)
    {
     r += w;
     ser[w] = time;
     temp++;
    }
    if (temp == v[i].F.S)
    {
     break;
    }
   }
   res[i] = r;
  }
  else
   res[i] = -1;
 }
 for (int i = 0; i < q; i++)
  cout << res[i] << endl;
 
}
int main() {
 fast();
 //int t;
 //cin >> t;
 //while (t--)
 solve();
 return 0;
}
