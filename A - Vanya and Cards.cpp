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
int n,a,b;
void solve()
{
 
}
int main()
{
    fast();
    int n,x,sum=0;
    cin>>n>>x;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        sum+=a;
    }
 
    sum=abs(sum);
    if(sum==0) {
        cout<<0<<endl;
        return 0;
    }
    if(sum>x)
    {
        if(sum%x==0)
        {
            cout<<sum/x<<endl;
        }
        else cout<<sum/x+1<<endl;
    }
    else
    {
        cout<<1<<endl;
    }
    return 0;
}
