#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    vector<pair<int ,int >> tele;
    for(int i=0;i<n;i++)
    {
        int a,b;
        cin>>a>>b;
        tele.push_back(make_pair(a,b));
    }
    if(tele[0].first!=0)
    {
        cout<<"no"<<endl;
        return 0;
    }
    else{
    int mx=tele[0].second;
    for(int i=0;i<n;i++)
    {
        if(tele[i].first<=mx&&tele[i].second>=m)
        {
            cout<<"yes"<<endl;
            return 0;
        }
        if(tele[i].first<=mx&&tele[i].second>mx)
        {
            mx=tele[i].second;
        }
    }
    }
    cout<<"no"<<endl;
   return 0;
}
