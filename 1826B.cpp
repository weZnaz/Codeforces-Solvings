#include <bits/stdc++.h>
using namespace std;
//may allah destroy israel
//Bismillah
#define intx int64_t
#define mod 1000000007
void weZnaz()
{
    intx n;
    cin>>n;
    intx arr[n];
    for(intx i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    if(n%2==0)
    {
        intx huu[n/2];
        for(intx i=0;i<n/2;i++)
         {
            huu[i]=abs(arr[i]-arr[n-i-1]);
         }
         intx mxgcd=huu[0];
         for(intx i=1;i<n/2;i++)
         {
            intx x=__gcd(mxgcd,huu[i]);
            mxgcd=x;
         }
         cout<<mxgcd<<endl;
    }
    else
    {
        intx huu[n/2+1];
        for(intx i=0;i<n/2+1;i++)
         {
            huu[i]=abs(arr[i]-arr[n-i-1]);
         }
         intx mxgcd=huu[0];
         for(intx i=1;i<n/2+1;i++)
         {
            intx x=__gcd(mxgcd,huu[i]);
            mxgcd=x;
         }
         cout<<mxgcd<<endl;
    }
    
}
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
/*#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
//#endif*/

    intx test=1;
cin>>test;
    while(test--)
    {
        weZnaz();
    }
    return 0;
}
