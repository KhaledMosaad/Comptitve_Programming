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
typedef vector<vector<int>> vvi;
void fast()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
}
const ll N = 10e9;
bool visited[200000];
vvi graph(150);
int r,c;
bool valid(int i,int j)
{
    if(i<r&&i>=0&&j<c&&c>=0)
        return true;
    return false;
}
bool b[55][55];
int main()
{
    fast();
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int b[n+1],a[2*n+1];
        memset(a,0,sizeof(a));
        bool exist[2*n+1];
        memset(exist,0,sizeof(exist));
        for(int i=1; i<=n; i++)
        {
            cin>>b[i];
            exist[b[i]]=1;
        }
        bool impos=false;
        for(int i=1;i<=n;i++)
        {
            a[2*i-1]=b[i];
            for(int k=b[i]+1;k<=2*n;k++)
            {
                if(!exist[k])
                {
                    a[2*i]=k;
                    exist[k]=1;
                    break;
                }
            }
            if(a[2*i]==0)
            {
                impos=true;
                break;
            }
        }
        if(impos)
        {
            cout<<-1;
        }
        else
        {
            for(int i=1;i<=2*n;i++) cout<<a[i]<<" ";
        }
        cout<<endl;
    }
 
    return 0;
}
