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
int mx=1000001;
vl primes;
vector<bool> isprime(mx,1);
void seive()
{
    isprime[0]=isprime[1]=0;
    for(int i=2;i*i<=mx;i++)
    {
        if(isprime[i])
        {
            for(int j=i*i;j<mx;j+=i)
                isprime[j]=false;
        }
    }
    for(int i=2;i<mx;i++)
    {
        if(isprime[i]){
            primes.pb(i*i);
            //cout<<i*i<<endl;
        }
    }
}
bool bs(ll key)
{
    ll r=0,l=primes.size()-1;
    while(r<=l)
    {
        ll mid=(r+l)/2;
        if(primes[mid]==key) return true;
        else if(primes[mid]<key) r=mid+1;
        else l=mid-1;
    }
    return false;
 
}
int main()
{
    fast();
    int n,m;
    cin>>n>>m;
    int a[n],b[m];
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<m;i++) cin>>b[i];
    sort(a,a+n);
    for(int i=0;i<m;i++)
    {
        int t=upper_bound(a,a+n,b[i])-a;
        cout<<t;
        if(i<m-1) cout<<" ";
    }
    return 0;
}
