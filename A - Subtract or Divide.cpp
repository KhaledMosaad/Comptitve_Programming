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
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int res=0;
        while(n!=1)
        {
            res++;
            if(n&1||n==2) n--;
            else
            {
                int w=n/2;
                n/=w;
            }
        }
        cout<<res<<endl;
    }
    return 0;
}
