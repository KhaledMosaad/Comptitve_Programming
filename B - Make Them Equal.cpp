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
int n,a,b;
void solve()
{
    cin>>n;
    set<int > st;
    int a[n],mn=INT_MAX,mx=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]>mx) mx=a[i];
        if(a[i]<mn) mn=a[i];
        st.insert(a[i]);
    }
    if(st.size()==1)
    {
        cout<<0<<endl;
    }
    else if(st.size()==2)
    {
        if((mx-mn)%2==0) cout<<(mx-mn)/2<<endl;
        else cout<<mx-mn<<endl;
    }
    else if(st.size()==3)
    {
        int t;
        for(set<int>::iterator it= st.begin();it!=st.end();it++)
        {
            if(*it!=mn&&*it!=mx)
                t=*it;
        }
        if(mx-t==t-mn)
        {
            cout<<mx-t<<endl;
        }
        else cout<<-1<<endl;
    }
    else cout<<-1<<endl;
}
int main()
{
    fast();
    //int t;
   // cin>>t;
   // while(t--)
   // {
        solve();
   // }
    return 0;
}
