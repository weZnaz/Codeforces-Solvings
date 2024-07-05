#include<bits/stdc++.h>
using namespace std;
int  main()
{int t;
cin>>t;
while(t--){
    int n,op,oddlst;
    vector<int>v;
    cin>>n;
    int maxx=n*n;
    int minx=1;
    if(n%2==0)
    {op=n*n/2;
    for(int i=0;i<op;i++)
    {
        v.push_back(maxx);
        v.push_back(minx);
        maxx--;
        minx++;
    }
    }
    else
    {
    op=n*n/2;
    oddlst=op+1;
    for(int i=0;i<op;i++)
    {
         v.push_back(maxx);
        v.push_back(minx);
         maxx--;
        minx++;
    }
    v.push_back(oddlst);
    }
    int vv[n][n];
    int k=0,o=0;
    for(int i=0;i<v.size();i++)
    {
        vv[o][k]=v[i];
        k++;
        if(k==n){k=0,o++;};
    }
    /*for(int i=0;i<n;i++)
    {
        if(i%2==0){
        for(int j=0;i<n;j++)
        {
            cout<<vv[i][j];
        }
        cout<<endl;
        }
        if(i%2!=0){
        for(int j=n-1;j>=0;j--)
        {
             cout<<vv[i][j];
        }cout<<endl;
        }
    }*/
   for(int i=0;i<n;i++)
   {
    if(i%2==0){
    for(int j=0;j<n;j++)
    {
        cout<<vv[i][j]<<" ";
    }
    }
    else{
         for(int j=n-1;j>=0;j--)
    {
        cout<<vv[i][j]<<" ";
    }
 
    }
    cout<<endl;
   }
 
}
}
