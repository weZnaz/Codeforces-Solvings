#include <bits/stdc++.h>
using namespace std;
//may allah destroy israel
//Bismillah
#define intx int64_t
#define mod 1000000007
void weZnaz()
{
     int n,l,r;
    cin>>n>>l>>r;
    vector<int>v;
    for(int i=1;i<=n;i++)
    {int x=l;
    if(x%i==0){v.push_back(x);
    }
    else{
        int b=r/i*i;
        if(b>=l && b<=r){
            v.push_back(b);
        }
        else{
         int a=l/i*i;
         if(a>=l && a<=r){
            v.push_back(b);
        }
        else
        {
            cout<<"NO\n";
            return;
        }
       
        }
 
    }
 
        
    }
    if(v[0]<l || v[n-1]>r){
        cout<<"NO\n";
        return;
    }
    cout<<"YES\n";
    for(int i=0;i<n;i++)
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
