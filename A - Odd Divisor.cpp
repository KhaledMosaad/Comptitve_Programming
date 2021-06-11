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
    ll n;
    cin>>n;
    if(n==2){
        cout<<"No"<<endl;
    }
    else
    {
        if(n&1){
        cout<<"Yes"<<endl;
        }
        else
        {
            while(n>1){
                n/=2;
                if(n&1&&n>1)
                {
                    cout<<"Yes"<<endl;
                    return;
                }
            }
            cout<<"No"<<endl;
        }
    }
}
int main()
{
    fast();
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}
 
