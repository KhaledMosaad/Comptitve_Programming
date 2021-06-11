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
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<ull> vul;
typedef vector<pii> vii;
typedef vector<vi> vvi;
 
void fast() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
void solve(){
 
}
ll bin(int k,int n)
{
    int r=1,l=n;
    while(r<l)
    {
        ll mid=(r+l)/2;
        ll s = (mid*(mid+1)/2)-k;
        if(s+mid==n) return s;
        else if(s+mid<n) r=mid;
        else l=mid;
    }
    return 0;
}
int main() {
    fast();
    int n,k;
    cin>>n>>k;
    cout<<bin(k,n)<<endl;
    return 0;
}
 
