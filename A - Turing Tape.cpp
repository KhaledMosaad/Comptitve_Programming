#include <bits/stdc++.h>
#define all(v) (v.begin(),v.end())
#define sz(v) ((int)((v).size()))
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define re return
using namespace std;
typedef long long ll;
typedef pair<int ,int > pii;
typedef vector<int> vi;
typedef vector <pii> vii;
typedef vector<vector<int>> vvi;
 
const ll N=10e9;
int n,d,a[100001],b[100001];
vector<int> bin(8,0);
int rev(int n)
{
     int z=0;
     int t=0;
        while(z<8)
        {
            if(n&1)
            bin[z]=1;
            else bin[z]=0;
            n/=2;
            z++;
        }
        for(int j=bin.size()-1,k=0;j>=0;k++,j--)
        {
            t+=bin[j]*pow(2,k);
        }
        re t;
 
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    int last=0;
    string s;
    getline(cin,s);
    int res=0;
    for(int i=0;i<s.length();i++)
    {
        int n=int(s[i]);
        int t =rev(n);
        res=(((res-t)%256)+256)%256;
        //int w=rev(res);
        cout<<res<<endl;
        res=t;
    }
    re 0;
}
