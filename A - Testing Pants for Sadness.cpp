#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
   //int t;
   //cin>>t;
   //while(t--)
   //{
        int n;
        cin>>n;
        ll a[n],s=0,cnt=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            s+=a[i];
        }
        for(int i=0;i<n;i++)
        {
            if(a[i]!=1)
            {
                s+=(a[i]-1)*i;
            }
        }
        cout<<s<<endl;
   //}
  return 0;
}
