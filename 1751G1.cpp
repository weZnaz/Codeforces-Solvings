#include <bits/stdc++.h>
using namespace std;
//may allah destroy israel
//Bismillah
#define intx int64_t
#define mod 1000000007
void weZnaz()
{
    intx n,k;
    cin>>n>>k;
    vector<intx>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        v[i]=v[i]+i+1;
    }
   sort(v.begin(),v.end());
   intx countx=0,i=0;
   while(k>=0)
   {
        k=k-v[i];
        i++;
        countx++;
   }
   cout<<countx-1<<endl;
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
