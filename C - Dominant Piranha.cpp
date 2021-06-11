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
        bool isEqual=true;
        cin>>n;
        int a[n];
        cin>>a[0];
        int mx=a[0];
        for(int i=1;i<n;i++)
        {
            cin>>a[i];
            if(a[i]!=a[i-1]) isEqual=false;
            mx=max(mx,a[i]);
        }
        if(isEqual)
        {
            cout<<-1<<endl;
        }
        else
        {
        for(int i=0;i<n;i++){
           if((i!=0&&a[i]==mx&&a[i-1]!=mx)||(i!=n-1&&a[i]==mx&&a[i+1]!=mx))
           {
               cout<<i+1<<endl;
                break;
           }
        }
        }
    }
    return 0;
}
