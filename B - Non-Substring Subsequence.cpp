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
const ll N = 10e9+5;
bool visited[200000];
vvi graph(150);
int r,c;
int main()
{
    fast();
    int t;
    cin>>t;
    while(t--)
    {
        int n,q;
        string s;
        cin>>n>>q>>s;
        while(q--)
        {
            int a,b;
            cin>>a>>b;
            bool exist=false;
            for(int i=0;i<a-1;i++)
            {
                if(s[i]==s[a-1])
                {
                    exist=true;
                }
            }
            for(int i=b;i<n;i++)
            {
                if(s[i]==s[b-1])
                {
                    exist=true;
                }
            }
            if(exist)
            {
                cout<<"YES"<<endl;
            }
            else cout<<"NO"<<endl;
        }
    }
 
    return 0;
}
