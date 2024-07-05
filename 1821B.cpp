#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
   int n;
   cin>>n;
   int arr1[n];
   int arr2[n];
   for(int i=0;i<n;i++)
   {
    cin>>arr1[i];
   }
   for(int i=0;i<n;i++)
   {
    cin>>arr2[i];
   }
   int l=-1;int r=-1;
   for(int i=0;i<n;i++)
   {
    if(arr1[i]!=arr2[i])
    {
        r=i;
         if(l==-1)
    {
        l=i;
    }
    }
   
   }
   
   while(l>=1 && arr2[l-1]<=arr2[l])
   {
    l--;
    if(l==0)break;
   }
   
   while(r<=n-2 && arr2[r+1]>=arr2[r])
   {
    
      r++;
      if(r==n-1)break;
   }
 
   cout<<l+1<<" "<<r+1<<endl;
    }
}
