#include <bits/stdc++.h>
#define all(v) (v.begin(),v.end())
#define sz(v) ((int)((v).size()))
#define F first
#define S second
#define pb push_back
#define mp make_pair
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
int n,a,b;
void solve()
{
    int h1,a1,c1,h2,a2;
    cin>>h1>>a1>>c1>>h2>>a2;
    vector<string> v;
    while(h2>0)
    {
        if((a2>=h1&&a1<h2))
        {
            v.push_back("HEAL");
            h1+=c1;
            h1-=a2;
        }
        else{
            v.push_back("STRIKE");
            h2-=a1;
            h1-=a2;
        }
    }
    cout<<v.size()<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<endl;
    }
}
int main()
{
    fast();
    //int t;
    //cin>>t;
   // while(t--)
    //{
        solve();
    //}
    return 0;
}
