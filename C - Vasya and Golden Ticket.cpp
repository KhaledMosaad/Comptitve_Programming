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
}
int cnt[101];
void solve()
{
 int n;
 cin >> n;
 string s;
 cin >> s;
 int sum = 0, mx = 0;
 cnt[0] = s[0] - '0';
 for (int i = 1; i < n; i++) {
  cnt[i] = cnt[i - 1] + (s[i] - '0');
 }
 while (s[n - 1] == '0') n--;
 bool ok = false;
 if ((n == 2 && s[0] == s[1]) || cnt[n - 1] == 0)
 {
  cout << "Yes" << endl;
  return;
 }
 for (int i = 0; i < n - 1; i++)
 {
  if (cnt[i] != 0 && cnt[n - 1] % cnt[i] == 0)
  {
   int temp = cnt[i];
   for (int j = i + 1; j < n; j++)
   {
    if (cnt[j] - temp == cnt[i] || cnt[j] - temp == 0)
    {
     temp = cnt[j];
     if (j == n - 1)
     {
      cout << "Yes" << endl;
      return;
     }
    }
    //if (cnt[j] - temp > cnt[i]) break;
 
   }
  }
 }
 cout << "No" << endl;
}
int main() {
 // fast();
 // int t;
 // cin >> t;
 // while (t--)
 solve();
 return 0;
}
