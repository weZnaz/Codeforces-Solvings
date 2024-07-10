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
   vector<intx>v(n);
   vector<intx>vv;
   for(int i=0;i<n;i++)
   {
    char c;
    cin>>c;
    v[i]=c-'0';
   }
    
    if(v[0]!=9)
    {
        for(intx i=0;i<n;i++)
        {
            intx x=9-v[i];
            cout<<x;
        }
        cout<<endl;
    }
    else{
        for(int i=n-1;i>=0;i--)
        {
            if(v[i]<=1){
                vv.push_back(1-v[i]);
            }
            else{
                vv.push_back(11-v[i]);
                if(i>0)
                v[i-1]=v[i-1]+1;
            }
        }
        for(int i=n-1;i>=0;i--)
        {
            cout<<vv[i];
        }
        cout<<endl;
    }
    
    
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
