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
    //loves monoir songs
    intx mn=n;
    intx msb=-1;
    while(n>0)
    {
        n >>=1;
        msb++;
        
            }
            intx x=pow(2,msb);
            if(x==mn)
            x=pow(2,msb-1);
            n=mn;
            for(intx i=n-1;i>=x;i--)
            cout<<i<<" ";
            for(intx i=0;i<=x-1;i++)
            cout<<i<<" ";
            cout<<endl;
            //cout<<x;
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
