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
    if(i<r&&i>=0&&j<c&&c>=0) return true;
    return false;
}
bool b[55][55];
int main()
{
    fast();
    cin>>r>>c;
    bool a[r][c];
    vii res;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>a[i][j];
        }
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(a[i][j]){
                bool can=true;
            for(int k=0;k<2;k++)
            {
                for(int t=0;t<2;t++)
                {
                    if(valid(i+k,j+t))
                    {
                        if(!a[i+k][j+t])
                        {
                            can=false;
                        }
                    }
                    else
                    {
                        can=false;
                    }
                }
            }
            if(can)
            {
                res.push_back(make_pair(i+1,j+1));
                for(int k=0;k<2;k++)
                {
                    for(int t=0;t<2;t++)
                    {
                        b[i+k][j+t]=true;
 
                    }
                }
 
            }
        }
        }
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(a[i][j]!=b[i][j])
            {
                cout<<-1<<endl;
                return 0;
            }
        }
    }
    cout<<res.size()<<endl;
    for(int i=0;i<res.size();i++)
    {
        cout<<res[i].first<<" "<<res[i].second<<endl;
    }
    return 0;
}
