#include <bits/stdc++.h>
using namespace std;
//may allah destroy israel
//Bismillah
#define intx int64_t
#define mod 1000000007
void weZnaz()
{
    intx n,k;
    cin>>k>>n;
    if(k==1)
    {
      cout<<n<<endl;
      return;
    }
 vector<intx>v(k,0);
 int mn=n;
    intx msb=-1;
    while(n>0)
    {
        n >>= 1;
        msb++;
    }
    v[0]=pow(2,msb)-1;
    n=mn-(pow(2,msb)-1);
    v[1]=v[1]+n;
    
    
    for(int i=0;i<k;i++)
    {
        cout<<v[i]<<" ";
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
