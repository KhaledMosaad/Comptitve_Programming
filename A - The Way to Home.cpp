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
typedef pair<int, int> pii;
typedef pair< ll, ll> pll;
typedef vector<pll> vll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<ull> vul;
typedef vector<pii> vii;
typedef vector<vi> vvi;
const int mxn=51;
int n,m,d,w,q;
string s,s1,s2;
int i8[8]={0,-1,0,1,-1,-1,1,1};
int j8[8]={-1,0,1,0,-1,1,1,-1};
int i4[4]={0,-1,0,1};
int j4[4]={-1,0,1,0};
vvi adj(mxn),clear(mxn);
vector<bool> visited(n);
 
bool isvalid(int i,int j)
{
    if(i>=0&&i<n&&j>=0&&j<m) return true;
    return false;
}
void fast() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
void solve()
{
    cin>>n>>d>>s;
    int pos=0,res=0;
    if(s[n-1]!='1')
    {
        cout<<-1<<endl;
        return;
    }
    for(int i=0;i<n-1;)
    {
        if(i+d<n&&s[i+d]=='1')
        {
            i+=d;
            res++;
        }
        else if(i+d>=n)
        {
            res++;
            break;
        }
        else
        {
            w=i+d;
            bool ok=false;
            while(w>i)
            {
                w--;
                if(w==i) break;
                if(s[w]=='1')
                {
                   ok=true;
                   i=w;
                   res++;
                   break;
                }
            }
            if(!ok)
            {
                cout<<-1<<endl;
                return;
            }
        }
    }
    cout<<res<<endl;
}
int main() {
    fast();
    solve();
    return 0;
}
