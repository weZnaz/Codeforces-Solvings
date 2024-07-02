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
    if(n%2==0)
    {
    cout<<(n/2)-1<<endl;
    }
    else
    {
         cout<<(n/2)<<endl;
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
