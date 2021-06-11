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
int mx=100001;
bool prime[100002];
void seive()
{
    for(int i=2;i*i<=mx;i++)
    {
        if(!prime[i])
        {
            for(int j=i*i;j<=mx;j+=i)
                prime[j]=true;
        }
    }
}
int main()
{
    fast();
    seive();
    int n;
    cin>>n;
    if(n==1) cout<<1<<endl<<1;
    else if(n==2) cout<<1 <<endl<<1<<" "<<1;
    else{
    cout<<2<<endl;
    for(int i=2;i<=n+1;i++)
    {
        if(!prime[i])
            cout<<1<<" ";
        else cout<<2<<" ";
    }
    }
    return 0;
}
