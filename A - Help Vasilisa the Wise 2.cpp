#include <bits/stdc++.h>
#define all(v) (v.begin(),v.end())
#define sz(v) ((int)((v).size()))
#define F first
#define S second
#define pb push_back
#define mp make_pair
using namespace std;
typedef long long ll;
typedef pair<int, int > pii;
typedef vector<int> vi;
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
const ll N = 10e9;
int n, d, a[100001], b[100001];
bool visited[200000];
vvi graph;
vector<int> res;
int main()
{
    fast();
    int r1,r2,c1,c2,d1,d2,g1=1,g2=1,g3=1,g4=1;
    cin>>r1>>r2>>c1>>c2>>d1>>d2;
    bool isExist=false;
    for(g1=1;g1<=9;g1++)
    {
        g2=r1-g1;
        g3=c1-g1;
        g4=r2-c1+g1;
        if(g1+g4==d1&&g2+g3==d2&&(g1!=g2&&g1!=g3&&g1!=g4&&g2!=g3&&g2!=g4&&g3!=g4))
        {
            isExist=true;
            break;
        }
    }
    if(isExist&&g1<=9&&g1>=1&&g2<=9&&g2>=1&&g3>=1&&g3<=9&&g4<=9&&g4>=1)
    {
        cout<<g1<<" "<<g2<<"\n"<<g3<<" "<<g4;
    }
    else
    {
        cout<<-1<<endl;
    }
    return 0;
}
