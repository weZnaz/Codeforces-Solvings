#include <bits/stdc++.h>
using namespace std;
//may allah destroy israel
//Bismillah
#define intx double
#define mod 1000000007
void weZnaz()
{
    intx n,k;
    cin>>n>>k;
    k=min(60.0,k);
    intx ans=min(n+1,pow(2,k));
    printf("%.f\n",ans);
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
