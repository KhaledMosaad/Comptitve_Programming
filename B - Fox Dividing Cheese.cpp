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
 
int main()
{
    fast();
    int a,b,ans=0,ans1=0;
    cin>>a>>b;
    int k=__gcd(a,b);
    a/=k; b/=k;
    while(a%2==0) a/=2,ans++;
    while(a%3==0) a/=3,ans++;
    while(a%5==0) a/=5,ans++;
    while(b%2==0) b/=2,ans++;
    while(b%3==0) b/=3,ans++;
    while(b%5==0) b/=5,ans++;
    cout<<(a!=b ? -1: max(ans,ans1))<<endl;
    return 0;
}
