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
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n],pro=1,sum=0,res=0;
        vi zeros;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]==0) {
                a[i]++,res++;
                zeros.push_back(i);
            }
            sum+=a[i];
            pro*=a[i];
        }
        if(sum==0)
        {
            if(zeros.size()==0)
            {
                res=1;
            }
            else
            {
                res++;
            }
        }
        cout<<res<<endl;
    }
    return 0;
}
