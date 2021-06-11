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
 
    int x,y,n;
    string s;
    cin>>n>>x>>y>>s;
    int ans=0;
    for(int i=n-x;i<n;i++)
    {
        if(i==n-y-1) ans+=s[i]!='1';
        else ans+=s[i]!='0';
    }
    cout<<ans<<endl;
    return 0;
}
