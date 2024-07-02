#include <bits/stdc++.h>
using namespace std;
//may allah destroy israel
//Bismillah
#define intx int64_t
#define mod 1000000007
void weZnaz()
{
    int n;
    cin>>n;
    map<int,int>mp;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        mp[i+1]=x;
    }
    int ans=-1;
    for(auto i:mp)
    {
        for(auto j:mp)
        {
            if(__gcd(i.second,j.second)==1)
            ans=max(ans,i.first+j.first);
        }
    }
    cout<<ans<<endl;

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
