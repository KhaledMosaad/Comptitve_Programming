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
int n,k;
bool can(int m)
{
    ll sum=m,t=1;
 
    while(m/pow(k,t))
    {
        sum+=m/pow(k,t);
        t++;
    }
    if(sum>=n) return true;
    return false;
}
int bs()
{
    int l=1,r=n,ans;
    while(l<=r)
    {
        int mid=(l+r)/2;
        if(can(mid)) ans=mid,r=mid-1;
        else l=mid+1;
    }
    return ans;
}
int main()
{
    fast();
    cin>>n>>k;
    cout<<bs()<<endl;
    return 0;
}
