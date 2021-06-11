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
        int t;
        cin>>t;
        while(t--)
        {
            int a,b;
            cin>>a>>b;
            if(a==b)
            {
                cout<<0<<endl;
 
            }
            else if(a<b)
            {
                int w=b-a;
                if(w%2==1)
                    cout<<1<<endl;
                else cout<<2<<endl;
            }
            else
            {
                int w=a-b;
                if(w%2==0)
                    cout<<1<<endl;
                else cout<<2<<endl;
            }
        }
        return 0;
    }
