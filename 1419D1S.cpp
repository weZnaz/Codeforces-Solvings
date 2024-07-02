#include<bits/stdc++.h>
#define intx int64_t
using namespace std;
int main()
{
    intx n;
    cin>>n;
    intx arr[100000];
    for(intx i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    if(n>2)
{
    sort(arr,arr+n);
    intx x=n/2;
    intx y=0;
    if(n%2==0)
    cout<<n/2-1<<endl;
    else
    cout<<n/2<<endl;
int c=0;
    while(c!=n)
    {
        
        intx xi=arr[x];
        
        intx yi=arr[y];

        cout<<xi<<" ";c++;
        if(c==n)break;
        cout<<yi<<" ";
        x++;
        y++;
        c++;
    }
}
else
{
    cout<<"0\n";
for(int i=0;i<n;i++)
{
    cout<<arr[i]<<" ";
}
   cout<<endl;
}

}