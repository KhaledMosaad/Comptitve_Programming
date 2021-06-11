#include <bits/stdc++.h>
#define all(v) (v.begin(),v.end())
#define sz(v) ((int)((v).size()))
#define F first
#define S second
#define pb push_back
#define mp make_pair
#define endl '\n'
using namespace std;
typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;
typedef pair<int, int > pii;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<ull> vul;
typedef vector <pii> vii;
typedef vector<vi> vvi;
void fast()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
void solve()
{
    int n ,m;
    cin>>n>>m;
    if(n<m) cout<<-1<<endl;
    else if(n==m) cout<<n<<endl;
    else
    {
        int s=n/2;
        if(n&1) s++;
        for(int i=s;i<=n;i++)
        {
            if(i%m==0)
            {
                cout<<i<<endl;
                return;
            }
        }
        cout<<-1<<endl;
    }
}
int main()
{
    fast();
    //int t;
   // cin>>t;
   //while(t--)
   // {
        solve();
    //}
    return 0;
}
 
