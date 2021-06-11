#include<bits/stdc++.h>
using namespace std;
int main()
{
    //int t;
    //cin>>t;
   // while(t--)
    //{
       int n,cnt=0,ans=0;
       cin>>n;
       int a[10000];
       memset(a,0,sizeof(a));
       for(int i=0;i<n;i++)
       {
           int b;
           cin>>b;
           a[b]++;
       }
       for(int i=1;i<10000;i++)
       {
           if(a[i]>1)
           {
               cnt=a[i]-1;
               for(int j=i+1;j<10000;j++)
               {
                   if(a[j]==0)
                   {
                       cnt--;
                       a[j]=1;
                       ans+=(j-i);
                   }
                   if(cnt==0) break;
               }
           }
       }
       cout<<ans<<endl;
   // }
    return 0;
}
