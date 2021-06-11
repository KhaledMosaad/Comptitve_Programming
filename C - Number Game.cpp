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
vi di;
void oddFacts(int n)
{
 for (int i = 2; i * i <= n; i++)
 {
  if (i & 1 && n % i == 0) di.pb(i);
  if ((n / i) & 1 && n % i == 0) di.pb(n / i);
 }
}
void solve()
{
 int n;
 cin >> n;
 if (n == 1) {
  cout << "FastestFinger" << el;
 }
 else if (n & 1 || n == 2)
 {
  cout << "Ashishgup" << el;
 }
 else
 {
  int turn = 0;
  while (true) {
   di.clear();
   oddFacts(n);
   sort(di.rbegin(), di.rend());
   bool ok = false;
   for (int i = 0; i < di.size(); i++)
   {
    // cout << di[i] << el;
    if ((n / di[i]) % 2 == 0 && n / di[i] > 2)
    {
     ok = true;
     n /= di[i];
     break;
    }
   }
   turn++;
   if (ok && n == 2 && turn % 2 == 1)
   {
    cout << "FastestFinger" << el;
    return;
   }
   else if (ok && n == 2 && turn % 2 == 0)
   {
    cout << "Ashishgup" << el;
    return;
   }
   if (!ok && (turn & 1))
   {
    cout << "FastestFinger" << el;
    return;
   }
   else if (!ok && turn % 2 == 0)
   {
    cout << "Ashishgup" << el;
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
