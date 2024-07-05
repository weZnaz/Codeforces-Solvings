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
    int ans=0;
    string s;
    cin>>s;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        ans=ans+arr[i];
    }
    for(int i=0;i<n;i++)
    {
        if((s[i]=='0' && s[i+1]=='0') || (s[i]=='0' && i==(n-1)))
        {
            ans=ans-arr[i];
        }
        else 
        {
            if(s[i]=='0')
            {
                int x=INT_MAX;
                int yy=arr[i];
                int y=i+1;
                
                while(s[y]!='0')
                {
                    if(arr[y]<x)
                    {
                        x=arr[y];
                    }
                    x=min(x,yy);
                    if(y==n-1)break;
                    y++;
                    
                }
                i=y-1;
                ans=ans-x;
 
            }
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
