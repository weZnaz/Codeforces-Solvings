#include <bits/stdc++.h>
using namespace std;
//may allah destroy israel
//Bismillah
#define intx int64_t
#define mod 1000000007
void weZnaz()
{
    int stn,stnd;
    cin>>stn>>stnd;
    if((stnd)>stn/2)
    {
        stnd=stn-stnd+1;
    }
    int moves=stn+1+stn+stnd-2+stn;
    cout<<moves<<endl;

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
