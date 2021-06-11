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
 cout.precision(15);
 cout.setf( ios::fixed, ios::floatfield );
 int n, k;
 cin >> n >> k;
 vector<ld> v(n), acc(n);
 ld ans = 0;
 for (int i = 0; i < n; i++)
 {
  cin >> v[i];
 }
 acc[0] = v[0];
 for (int i = 1; i < n; i++)
 {
  acc[i] = acc[i - 1] + v[i];
 }
 for (int i = k - 1; i < n; i++)
 {
  ld temp = (1.0 * acc[i] / (i + 1));
  //cout << temp << " " << acc[i] << endl;
  ans = max(ans, temp);
  for (int j = 0; j <= i - k; j++)
  {
   temp = (1.0 * (acc[i] - acc[j] ) / (i - j));
   //cout << temp << " " << acc[i] - acc[j] << endl;
   ans = max(temp, ans);
  }
 }
 cout << ans << endl;
}
 
int main() {
 fast();
 //int t;
 //cin >> t;
 //while (t--)
 solve();
 return 0;
}
