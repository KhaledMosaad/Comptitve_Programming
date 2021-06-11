#include <bits/stdc++.h>
using namespace std;
bool myfun(int i,int j)
{
    return i==j;
}
int main()
{
   int n,v;
   cin>>n>>v;
   vector<int> res;
   for(int i=0;i<n;i++)
   {
       int a;
       cin>>a;
       for(int j=0;j<a;j++)
       {
           int b;
           cin>>b;
           if(b<v)
           {
               res.push_back(i+1);
           }
       }
   }
    sort(res.begin(),res.end());
    vector<int>::iterator it;
    it = unique (res.begin(), res.end());
    res.resize( std::distance(res.begin(),it));
   cout<<res.size()<<endl;
   for(int i=0;i<res.size();i++)
    cout<<res[i]<<" ";
   return 0;
}
