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
 
}
int main()
{
    fast();
    int b,k;
    cin>>b>>k;
    ll sum=0;
    int a[k];
    for(int i=0;i<k;i++) cin>>a[i];
    for(int i=0;i<k-1;i++)
    {
        sum+=(b*a[i]);
    }
    sum+=a[k-1];
    if(sum&1) cout<<"odd"<<endl;
    else cout<<"even"<<endl;
    return 0;
}
 
