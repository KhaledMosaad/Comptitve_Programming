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
typedef vector<vi> vvi;
void fast()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
int main()
{
    fast();
    ll n,s;
    cin>>n>>s;
    ll a[n];
    ll m= INT_MAX,sum=0,sum2=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        m=min(m,a[i]);
        sum+=a[i];
    }
    sum2=sum-m*n;
    if(sum2>=s)
    {
        cout<<m<<endl;
    }
    else if(sum<s)
    {
        cout<<-1<<endl;
    }
    else
    {
        while(sum2<s)
        {
            sum2+=n;
            m--;
        }
        cout<<m<<endl;
    }
    return 0;
}
