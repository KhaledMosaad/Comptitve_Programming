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
    int t;
    cin>>t;
    while(t--)
    {
        ll n,res=0;
        cin>>n;
        for(ll i=n,k=(n-1)/2;i>=3;i-=2,k--)
        {
            res+=(2*i+(i-2)*2)*k;
        }
        cout<<res<<endl;
    }
    return 0;
}
