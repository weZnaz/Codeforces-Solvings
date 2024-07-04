#include <bits/stdc++.h>
using namespace std;
//may allah destroy israel
//Bismillah
#define intx int64_t
#define mod 1000000007
void weZnaz()
{
    int n,k;
        cin>>n>>k;
        vector<int>a(n);
        for(int i=0;i<n;i++)
            cin>>a[i];
        vector<int>pref(200005);
        for(int i=0;i<n;i++)
            pref[i+1]=pref[i]+a[i];
        int mini_total=1e9;
        int index;
        for(int i=0;i<=n-k;i++){
            int total=pref[i+k]-pref[i];
            if(total<mini_total){
                mini_total=total;
                index=i+1;
            }
        }
        cout<<index;
    
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
