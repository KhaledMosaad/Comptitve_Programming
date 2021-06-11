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
typedef vector<vi> vvi;
void fast()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
int main()
{
    fast();
    int w,h,k,res=0;
    cin>>w>>h>>k;
    for(int i=1;i<=k;i++)
    {
        res+=((w-(4*(i-1)))*(h-(4*(i-1)))-((w-2)-(4*(i-1)))*((h-2)-(4*(i-1))));
    }
    cout<<res<<endl;
    return 0;
}
