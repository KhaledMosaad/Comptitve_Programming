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
int main()
{
    int y,b,r;
    cin>>y>>b>>r;
    int res=min(y,min(b,r));
    if(res==r)
    {
        cout<<res+(res-1)+(res-2)<<endl;
    }
    else if(res==b)
    {
        cout<<res+1+res+res-1<<endl;
    }
    else
    {
        if(r>=res+2)
        {
            cout<<res+2+res+1+res<<endl;
        }
        else
        {
            cout<<res+1+res+res-1<<endl;
        }
    }
    return 0;
}
