#include <bits/stdc++.h>
#define all(v) (v.begin(),v.end())
#define sz(v) ((int)((v).size()))
#define F first
#define S second
#define PB push_back
#define MP make_pair
using namespace std;
typedef long long ll;
typedef pair<int ,int > pii;
typedef vector<int> vi;
typedef vector <pii> vii;
typedef vector<vector<int>> vvi;
const ll N=10e9;
int n,d,a[100001],b[100001];
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n],b[n],c[n],p[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        for(int i=0;i<n;i++)
            cin>>b[i];
        for(int i=0;i<n;i++)
            cin>>c[i];
        p[0]=a[0];
        for(int i=1;i<n-1;i++)
        {
            if(p[i-1]!=a[i])
            {
                p[i]=a[i];
            }
            else if(p[i-1]!=b[i])
            {
                p[i]=b[i];
            }
            else if(p[i]!=c[i])
            {
                p[i]=c[i];
            }
        }
        if(a[n-1]!=p[0]&&a[n-1]!=p[n-2])
        {
            p[n-1]=a[n-1];
        }
        else if(b[n-1]!=p[0]&&b[n-1]!=p[n-2])
        {
            p[n-1]=b[n-1];
        }
        else {
            p[n-1]=c[n-1];
        }
        for(int i=0;i<n;i++)
            cout<<p[i]<<" ";
        cout<<endl;
    }
    return 0;
}
