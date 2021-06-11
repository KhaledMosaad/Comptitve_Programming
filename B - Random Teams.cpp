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
 ll n, m;
 cin >> n >> m;
 ll kmx = (n - m) * (n - m + 1) / 2;
 ll w = n / m;
 ll kmin = (m - 1) * (w) * (w - 1) + (n % m + w) * (n % m + w - 1);
 kmin = min(kmin, (n % m) * (w + 1) * (w) + (m - n % m) * (w) * (w - 1));
 cout << kmin / 2 << " " << kmx << el;
}
int main() {
 fast();
 // int t;
 // cin >> t;
 // while (t--)
 solve();
 return 0;
}
