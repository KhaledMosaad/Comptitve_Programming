#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,res=0,mx=0;
    cin>>n;
    set<int> sock;
    int arr[2*n];
    for(int i=0;i<2*n;i++)
        cin>>arr[i];
    for(int i=0;i<2*n;i++)
    {
 
        if(sock.find(arr[i])!=sock.end())
        {
            res--;
        }
        else
        {
 
            res++;
            sock.insert(arr[i]);
        }
        mx=max(res,mx);
    }
    cout<<mx<<endl;
   return 0;
}
