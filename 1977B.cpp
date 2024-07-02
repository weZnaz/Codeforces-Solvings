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
    vector<int>v;
    while ((n!=0))
    {
       int x=n%2;
       v.push_back(x);
       n=n/2;
    }
    cout<<(2*v.size())<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" "<<"0 ";
    }
    cout<<endl;
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
