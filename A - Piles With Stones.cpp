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
    int n;
    cin>>n;
    int a[n];
    int w=0;
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++)
    {
        int b;
        cin>>b;
        if(b==a[i]) continue;
        else if(b>a[i])
        {
            w+=(b-a[i]);
        }
        else
        {
            w-=(a[i]-b);
        }
    }
    if(w<=0) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}
