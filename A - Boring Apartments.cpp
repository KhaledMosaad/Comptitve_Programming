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
            string x;
            cin>>x;
            int w=int(x[0])-48;
            //cout<<w<<"Khalid"<<endl;
            int res=10*(w-1);
            int n=x.size();
            res+=(n*(n+1))/2;
            cout<<res<<endl;
        }
    return 0;
}
