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
    vector<int>arr(n);
    vector<int>aee(k);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
     for(int i=0;i<k;i++)
    {
        cin>>aee[i];
    }
    set<int>s;
    for(int i=0;i<k;i++)
    {if(s.count(aee[i]))continue;
    s.insert(aee[i]);
        for(int j=0;j<n;j++)
        {
            if(arr[j]%(1<<aee[i])==0)
            {
                arr[j]=arr[j]+(1<<(aee[i]-1));
            }
        }
    }
     for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
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
