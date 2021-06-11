#include <bits/stdc++.h>
using namespace std;
const int  N=10e5;
 bool u[int(2e5+9)];
int main()
{
    int a[9];
   int k;
   for(k=1;k<=8;k++)
   {
       a[k]=(pow(2,k)-1)*pow(2,k-1);
   }
   int n;
   cin>>n;
   for(int i=8;i>=1;i--)
   {
       if(n%a[i]==0){
 
           cout<<a[i]<<endl;
           return 0;
   }
   }
 
   return 0;
}
