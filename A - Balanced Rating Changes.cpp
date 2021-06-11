#include <bits/stdc++.h>
#define all(v) (v.begin(),v.end())
#define sz(v) ((int)((v).size()))
#define F first
#define S second
#define pb push_back
#define mp make_pair
using namespace std;
typedef long long ll;
typedef pair<int, int > pii;
typedef vector<int> vi;
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
int n, d, a[100001], b[100001];
bool visited[200000];
vvi graph;
vector<int> res;
int main()
{
    fast();
    int n,odd=0,insum=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) {
        cin>>a[i];
        insum+=(a[i]/2);
    }
    if(insum==0)
    {
        for(int i=0;i<n;i++)
        {
            cout<<(a[i]/2)<<endl;
        }
    }
    else if(insum<0)
    {
        for(int i=0;i<n;i++)
        {
            if((a[i]&1)&&insum!=0&&a[i]>0)
            {
                cout<<a[i]/2+1<<endl;
                insum++;
            }
            else
            {
                cout<<a[i]/2<<endl;
            }
        }
    }
    else
    {
        for(int i=0;i<n;i++)
        {
            if((a[i]&1)&&insum!=0&&a[i]<0)
            {
                cout<<a[i]/2-1<<endl;
                insum--;
            }
            else
            {
                cout<<a[i]/2<<endl;
            }
        }
    }
 
    return 0;
}
