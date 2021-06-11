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
    int n;
    string a,res,b="1";
    cin>>n>>a;
    if(a[0]=='0') res="1";
    else res="2";
    for(int i=1;i<n;i++)
    {
        if(res[i-1]=='1')
        {
            if(a[i]=='1')
            {
                b+="1";
                res+="2";
            }
            else
            {
                b+="0";
                res+="0";
            }
        }
        else if(res[i-1]=='2')
        {
            if(a[i]=='1')
            {
                b+="0";
                res+="1";
            }
            else
            {
                b+="1";
                res+="1";
            }
        }
        else
        {
            if(a[i]=='1')
            {
                b+="1";
                res+="2";
            }
            else
            {
                b+="1";
                res+="1";
            }
        }
    }
    cout<<b<<endl;
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
 
