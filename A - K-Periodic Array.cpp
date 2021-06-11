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
ll q=3e7;
ll solve(ll n){
    for(ll i=1;i<=q;i++)
    {
        if(i*(i-1)/2<n&&i*(i+1)/2>=n)
        {
            return i;
        }
    }
}
int main() {
    fast();
    int n,k;
    cin>>n>>k;
    int a[n],one=0,two=0;
    for(int i=0;i<n;i++) {
        cin >> a[i];
        if(a[i]==1) one++;
        else two++;
    }
    int res=0;
    for(int i=0;i<k;i++)
    {
        int cnt[3]={0};
        for(int j=i;j<n;j+=k)
            cnt[a[j]]++;
        res+=min(cnt[1],cnt[2]);
    }
    cout<<res<<endl;
    return 0;
}
