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
    int n,k;
    cin>>n>>k;
    int a[n],mi=INT_MAX;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        mi=min(mi,a[i]);
    }
    int b=mi+k;
    for(int i=0;i<n;i++)
    {
        if(abs(a[i]-b)>k)
        {
            cout<<-1<<endl;
            return;
        }
    }
    cout<<mi+k<<endl;
}
int main()
{
    fast();
    int q;
    cin>>q;
    while(q--) solve();
    return 0;
}
 
