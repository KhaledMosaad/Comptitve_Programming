#include <bits/stdc++.h>
#define all(v) (v.begin(),v.end())
#define sz(v) ((int)((v).size()))
using namespace std;
typedef vector<int> vi;
typedef vector <pair<int ,int >> vii;
typedef vector<vector<int>> vvi;
vector<long long> data;
const long long N=10e9;
//int n,d,a[100001],b[100001];
 
int main()
{
    int tt;
    cin>>tt;
    while(tt--)
    {
        int n,d;
        cin>>n>>d;
        int s=(int) sqrt(d)+10;
        int i;
        for(i=0;i<s;i++)
        {
            if(i+(d+i)/(i+1)<=n)
                break;
        }
        cout<<(i < s ? "YES" : "NO")<<endl;
 
    }
    return 0;
}
