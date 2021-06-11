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
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
}
vi primes;
int a[10005];
int mxn=10000;
void seive ()
{
    for(int i=2;i*i<=mxn;i++)
    {
        if(!a[i])
        {
            for(int j=i*i;j<=mxn;j+=i)
                a[j]=true;
        }
    }
    for(int i=2;i<=mxn;i++)
    {
        if(!a[i]) primes.pb(i);
    }
}
 
int main()
{
    fast();
    int n,k;
    cin>>n>>k;
    seive();
    for(int j=1;(primes[j]+primes[j-1]+1)<=n;j++)
    {
        if(!a[primes[j]+primes[j-1]+1])
        {
            k--;
        }
    }
    if(k>0) cout<<"No"<<endl;
    else cout<<"Yes"<<endl;
    return 0;
}
