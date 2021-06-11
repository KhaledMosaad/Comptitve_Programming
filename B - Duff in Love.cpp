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
typedef vector<vector<int>> vvi;
void fast()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
const ll N = 10e9;
bool visited[200000];
vvi graph(150);
int main()
{
    fast();
    ll n;
    cin>>n;
    vl factors;
    ll i;
    for(i=1;i*i<n;i++)
    {
        if(n%i==0)
        {
            factors.pb(i);
            factors.pb(n/i);
        }
    }
    if(i*i==n) factors.pb(n/i);
    sort(factors.begin(),factors.end(),greater<ll>());
    for(ll j=0;j<factors.size();j++)
    {
        bool bigest=true;
        for(ll k=2;k*k<=factors[j];k++)
        {
            if((factors[j]%(k*k))==0)
            {
                bigest=false;
            }
        }
        if(bigest)
        {
            cout<<factors[j]<<endl;
            return 0;
        }
    }
 
    return 0;
}
