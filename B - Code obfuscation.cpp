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
bool alpha[26];
void solve()
{
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++)
    {
        alpha[s[i]-'a']=true;
        for(int j=(s[i]-'a');j>=0;j--)
        {
            if(!alpha[j])
            {
                cout<<"NO"<<endl;
                return;
            }
        }
    }
    int f=-1,t;
    for(int i=0;i<26;i++)
    {
        if(!alpha[i])
        {
            f=i;
            break;
        }
    }
    for(int i=25;i>=0;i--)
    {
        if(alpha[i])
        {
            t=i;
            break;
        }
    }
    if(f==-1||f>t)
    {
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;
}
int main()
{
    fast();
    //int t;
    //cin>>t;
    //while(t--)
    //{
        solve();
    //}
    return 0;
}
