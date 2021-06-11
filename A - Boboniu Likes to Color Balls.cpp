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
    int r,g,b,w,e=0,o=0;
    cin>>r>>g>>b>>w;
    if(r%2==0)
        e++;
    else o++;
    if(g%2==0)
        e++;
    else o++;
    if(b%2==0)
        e++;
    else o++;
    if(w%2==0)
        e++;
    else o++;
    if((r==g&&g==b)||(e==3&&o==1)||(e==4)||(r!=0&&b!=0&&g!=0&&((o==3&&e==1)||o==4))) {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }
}
int main()
{
    fast();
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
 
