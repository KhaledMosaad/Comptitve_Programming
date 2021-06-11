#include <bits/stdc++.h>
using namespace std;
 
int main()
{
   int n;
   cin>>n;
   int N=2*n,sum=0;
   int a[N];
   for(int i=0;i<N;i++)
   {
       cin>>a[i];
       sum+=a[i];
   }
   sort(a,a+N);
   int s1=0,s2=0;
   for(int i=0;i<n;i++)
    s1+=a[i];
   for(int i=n;i<N;i++)
    s2+=a[i];
   if(sum%2==1||s1!=s2)
   {
       for(int i=0;i<N;i++)
        cout<<a[i]<<" ";
   }
   else
   {
       cout<<-1;
   }
   return 0;
}
