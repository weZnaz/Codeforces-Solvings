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
    int arr[n][n];
    int rev[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }
int x=0;
   for(int i=n-1;i>=0;i--)
    {int y=0;
        for(int j=n-1;j>=0;j--)
        {
            rev[x][y]=arr[i][j];
            y++;
        }x++;
    }
    int def=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
          if(arr[i][j]!=rev[i][j])def++;
        }
        
    }
    def=def/2;
    if(def>k)
    {
        cout<<"NO\n";
    }
    else if(n%2!=0 && def<=k)
    {
        cout<<"YES\n";
    }
    else if(abs(def-k)%2==0 && def<=k)
    {
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }
    //debug
    //cout<<def<<endl;
    
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
