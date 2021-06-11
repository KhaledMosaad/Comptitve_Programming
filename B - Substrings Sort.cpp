#include <bits/stdc++.h>
using namespace std;
const int N=10e5;
int main()
{
    int n;
    cin>>n;
    vector<pair<int ,int>> reordered(n);
    vector<string> s(n);
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
        reordered[i]=make_pair(s[i].length(),i);
    }
    sort(reordered.begin(),reordered.end());
    for(int i=0;i<n-1;i++)
    {
        size_t founded=s[reordered[i+1].second].find(s[reordered[i].second]);
        if(founded==std::string::npos)
        {
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<s[reordered[i].second]<<endl;
    }
    return 0;
}
