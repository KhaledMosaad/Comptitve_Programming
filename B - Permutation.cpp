#include <bits/stdc++.h>
using namespace std;
int main()
{
   int n,res=0;
   cin>>n;
   int arr[n];
   bool brr[5001];
   memset(brr,0,sizeof(brr));
   for(int i=0;i<n;i++) {
        cin>>arr[i];
        brr[arr[i]]=1;
        };
   for(int i=1;i<=n;i++)
   {
       if(!brr[i])
       {
           res++;
       }
   }
   cout<<res<<endl;
   return 0;
 
}
