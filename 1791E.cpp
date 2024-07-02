#include <bits/stdc++.h>
using namespace std;
//may allah destroy israel
//Bismillah
#define intx int64_t
#define mod 1000000007
void weZnaz()
{
    intx n;
    intx lastneg=0;
    intx negnum=0;
    intx dosum=0;
    cin>>n;
    intx arr[n];
    for(intx i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]<=0){
            lastneg=arr[i];
            negnum++;
        
        }
        dosum=dosum+abs(arr[i]);
    }
    
    if(negnum%2==0)
    {
        cout<<dosum<<endl;
    }
    else
    {
        intx small=INT_MAX;
        for(intx i=0;i<n;i++)
        {
            intx ab=abs(arr[i]);
            if(ab<small)
            small=ab;

        }
        cout<<dosum-2*small<<endl;
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
