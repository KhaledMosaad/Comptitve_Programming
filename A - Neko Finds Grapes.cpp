#include <bits/stdc++.h>
#define all(v) (v.begin(),v.end())
#define sz(v) ((int)((v).size()))
#define F first
#define S second
#define pb push_back
#define mp make_pair
#define endl '\n'
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
    int n,m;
    cin>>n>>m;
    int oddn=0,oddm=0,evenn=0,evenm=0;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        if(a&1) oddn++;
        else evenn++;
    }
    for(int i=0;i<m;i++)
    {
        int a;
        cin>>a;
        if(a&1) oddm++;
        else evenm++;
    }
    cout<<min(oddm,evenn)+min(oddn,evenm)<<endl;
    return 0;
}
