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
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        intx x=arr[i];
        
        if((x-20)%14==0 && x>=15)
        {
            cout<<"YES"<<endl;
        }
        else if((x-19)%14==0 && x>=15)
        {
            cout<<"YES"<<endl;
        }
        else if((x-18)%14==0 && x>=15)
        {
            cout<<"YES"<<endl;
        }
        else if((x-17)%14==0 && x>=15)
        {
            cout<<"YES"<<endl;
        }
        else if((x-16)%14==0 && x>=15)
        {
            cout<<"YES"<<endl;
        }
        else if((x-15)%14==0 && x>=15)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
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
