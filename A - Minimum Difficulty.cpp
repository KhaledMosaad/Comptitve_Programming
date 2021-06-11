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
    void solve()
    {
        int n,m;
        cin>>n>>m;
        int res=0;
        while(m!=0&&n!=0)
        {
            if(m>n)
            {
                res+=(m/n);
                m=m%n;
            }
            else
            {
                res+=(n/m);
                n=n%m;
            }
        }
        cout<<res<<endl;
    }
    int main()
    {
        fast();
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        int res=2000;
        for(int j=1;j<n-1;j++){
            int w=0;
            for(int i=1;i<n;i++)
            {
                if(i==j)
                    continue;
                else if(i==j+1)
                    w=max(w,(a[i]-a[i-2]));
                else
                    w=max(w,(a[i]-a[i-1]));
            }
            res=min(res,w);
        }
        cout<<res<<endl;
        return 0;
    }
 
