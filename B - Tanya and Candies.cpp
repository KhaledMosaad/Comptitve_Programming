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
void solve()
{
    int n;
    cin>>n;
    vi a(n);
    int even=0,odd=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(i&1)
        {
            even+=a[i];
        }
        else
        {
            odd+=a[i];
        }
    }
    int res=0,sum1=0,sum2=0;
    for(int i=0;i<n;i++)
    {
        if(i&1)
        {
            sum2+=a[i];
            int new_even=even-(even-sum2)+(odd-sum1)-a[i];
            int new_odd=odd-(odd-sum1)+(even-sum2);
            if(new_even==new_odd) res++;
 
        }
        else
        {
            sum1+=a[i];
            int new_even=even-(even-sum2)+(odd-sum1);
            int new_odd=odd-(odd-sum1)+(even-sum2)-a[i];
            if(new_even==new_odd) res++;
        }
    }
    cout<<res<<endl;
}
int main()
{
    fast();
 
    solve();
    return 0;
}
