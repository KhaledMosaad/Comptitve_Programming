#include <bits/stdc++.h>
#define all(v) (v.begin(),v.end())
#define sz(v) ((int)((v).size()))
#define F first
#define S second
#define PB push_back
#define MP make_pair
using namespace std;
typedef long long ll;
typedef pair<int ,int > pii;
typedef vector<int> vi;
typedef vector <pii> vii;
typedef vector<vector<int>> vvi;
const ll N=10e9;
int n,d,a[100001],b[100001];
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    string s,t;
    cin>>s>>t;
    if(s.length()!=t.length())
     {
        cout<<"NO"<<endl;
        return 0;
     }
     int def=0,fir,sec;
     for(int i=0;i<s.length();i++)
     {
         if(def>2)
         {
             cout<<"NO"<<endl;
             return 0;
         }
         if(s[i]!=t[i])
         {
             def++;
             if(def==1)
             {
                 fir=i;
             }
             else
             {
                 sec=i;
             }
         }
     }
     if(def==2&&s[fir]==t[sec]&&s[sec]==t[fir])
     {
         cout<<"YES"<<endl;
     }
     else
     {
         cout<<"NO"<<endl;
     }
 
    return 0;
}
