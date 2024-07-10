#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    if(arr[0]!=n){
        cout<<"NO\n";
        continue;
    }
    sort(arr.rbegin(),arr.rend());
    //for(int i=0;i<n;i++)cout<<arr[i];
    vector<int>v;
     for (int i = n-1; i >= 0; i--) {
            while (v.size() < arr[i]) {
                v.push_back(i+1);
            }
        }
    
    int f=1;
    if(arr[0]>n){
        cout<<"NO\n";
        f=0;
    }
    else{
    for(int i=arr[0]-1;i>=0;i--)
    {
        if(arr[i]!=v[i])
        {
            cout<<"NO\n";
            f=0;
            break;
        }
    }
    }
    if(f!=0)
    cout<<"YES\n";
    
    }
}
