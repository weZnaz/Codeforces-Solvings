#include <bits/stdc++.h>
using namespace std;
//may allah destroy israel
//Bismillah
#define intx int64_t
#define mod 1000000007
void weZnaz()
{
    int n,k,sum=0;
    cin>>n>>k;
    int arr[n];
    int pre[n];
    int suf[n];
    for(int i=0;i<n;i++)
    {
      cin>>arr[i];
      sum=sum+arr[i];
    }
    //sorting
    sort(arr,arr+n);

    //prefixx sum
    pre[0]=arr[0];
    for(int i=1;i<n;i++)
    {
        pre[i]=pre[i-1]+arr[i];
    }
    //suffix sub
    suf[0]=arr[n-1];
    for(int i=1;i<n;i++)
    {
        suf[i]=suf[i-1]+arr[n-i-1];
    }
    //varifaing suffix and prefix sum
   
    int mindel=INT_6;
    for(int i=0;i<=k;i++)
    {
        int del=pre[2*i-1]+suf[k-i];
        if(i==0)
        {
            del=suf[k-i];
        }
        if(i==k)
        {
            del=pre[2*i-1];
        }
        if(del<mindel)
        {
            mindel=del;
        }
    }
    cout<<sum<<endl;

}
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
/*#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
//#endif*/

    intx test=1;
//cin>>test;
    while(test--)
    {
        weZnaz();
    }
    return 0;
}
