#include<bits/stdc++.h>
typedef long long ll;
typedef long double ld;
using namespace std;
 
int main(){
    //ll t;
   // cin>>t;
   // while(t--)
   // {
       int n,mx=-1;
       cin>>n;
       ll a[n];
       for(int i=0;i<n;i++)
       {
           cin>>a[i];
       }
 
       for(int i=0;i<n;i++)
       {
           int cur=0;
           for(int j=i;j<n;j++)
           {
               cur^=a[j];
               mx=max(mx,cur);
           }
       }
       cout<<mx<<endl;
 
    //}
    return 0;
}
