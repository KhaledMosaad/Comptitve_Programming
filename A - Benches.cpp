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
    int n,m,mx=0,mi;
    cin>>n>>m;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        mx=max(mx,a[i]);
    }
    mx+=m;
    sort(a,a+n);
    int k=a[n-1];
    int i=0;
    while(m>0)
    {
        if(a[i%n]<k)
        {
                m-=(k-a[i%n]);
                a[i%n]=k;
        }
        else if(a[i%n]==k)
        {
            a[i%n]++;
            k++;
            m--;
            //i=0;
        }
        i++;
 
    }
    cout<<k<<" "<<mx<<endl;
    return 0;
}
