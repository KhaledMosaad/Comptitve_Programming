#include <bits/stdc++.h>
#define all(v) (v.begin(),v.end())
#define sz(v) ((int)((v).size()))
using namespace std;
typedef vector<int> vi;
typedef vector <pair<int ,int >> vii;
typedef vector<vector<int>> vvi;
vector<long long> data;
const long long N=10e9;
int n,d,m,a[100001],b[100001];
int bin(int s,int e,int d)
{
    int mid=0,ans=-1;
    while(e>=s)
    {
        mid=(e+s)/2;
        if((b[mid]>d&&b[mid-1]<d)||b[mid]==d) return mid;
        else if(b[mid]<d) s=mid+1;
        else e=mid-1;
    }
    return mid;
}
int main()
{
    cin>>n;
    cin>>a[0];
    b[0]=a[0];
    for(int i=1;i<n;i++)
    {
        cin>>a[i];
        b[i]=b[i-1]+a[i];
    }
    cin>>m;
    int q;
    for(int i=0;i<m;i++)
    {
        cin>>q;
        int s=bin(0,n-1,q)+1;
        cout<<s<<endl;
    }
    return 0;
}
