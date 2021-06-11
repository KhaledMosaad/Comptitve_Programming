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
        int n,x;
        cin>>n>>x;
        vector<int > a(n),b(n);
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++) cin>>b[i];
        sort(b.rbegin(),b.rend());
        sort(a.begin(),a.end());
        bool is=true;
        for(int i=0;i<n;i++)
        {
            if(a[i]+b[i]>x)
            {
                cout<<"No"<<endl;
                is=false;
                break;
            }
        }
        if(is)
        {
            cout<<"Yes"<<endl;
        }
        //for(int i=0;i<n;i++)
        //{
          //  int k=*lower_bound(b.begin(),b.end(),(x-a[i]));
           // if(binary_search(b.begin(),b.end(),(x-a[i])))
           // {
 
           // }
 
 
       // }
    }
    return 0;
}
