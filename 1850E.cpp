#include <bits/stdc++.h>
using namespace std;
//may allah destroy israel
//Bismillah
#define intx long double
#define mod 1000000007
void weZnaz()
{
    intx n,N;
    intx X=0,Y=0;
    cin>>n>>N;
    vector<intx>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        X=X+v[i];
        Y=Y+v[i]*v[i];
    }
    intx O=4*X;
    intx G=sqrt(16*X*X+4*4*n*(N-Y));
    intx ans=(-O+G)/(2*n*4);
    printf("%.Lf\n",ans);

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
