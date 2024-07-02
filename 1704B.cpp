#include <bits/stdc++.h>
using namespace std;
//may allah destroy israel
//Bismillah
#define intx int64_t
#define mod 1000000007
void weZnaz()
{
    int n,k,earl=0;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int x;
    if(arr[1]>arr[0])x=arr[0]+k;
    else
    x=arr[0]-k;
    for(int i=0;i<n;i++)
    {
        if(abs(arr[i]-x)>k)
        {
            if(arr[i+1]>arr[i])x=arr[0]+k;
             else
             x=arr[i]-k;
             i--;
             earl++;        }
    }
    cout<<earl-1<<endl;
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
