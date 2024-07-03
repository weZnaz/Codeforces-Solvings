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
 intx arr[n];
 for(intx i=0;i<n;i++)
 {
    cin>>arr[i];
 }   
 sort(arr,arr+n);     
                 /*debug
 for(int i=0;i<n;i++)
 {
    cout<<arr[i]<<" ";
 }*/
 if(arr[0]!=1)
 {
    cout<<"NO\n";
    return;
 }
 if(n==1)
 {
    cout<<"YES\n";
    return;
 }
 intx sum=arr[0];
 for(intx i=1;i<n;i++)
 {
    if(sum<arr[i])
    {
        cout<<"NO\n";
        return;
    }
    sum=sum+arr[i];
 }
 cout<<"YES\n";
 

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
