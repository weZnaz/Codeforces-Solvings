#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
int n,k;
cin>>n>>k;
string s;
cin>>s;
if(k%2==0){
sort(s.begin(),s.end());
cout<<s<<endl;
}
else{
    string even="";
    string odd="";
    for(int i=0;i<n;i++)
    {
        if(i%2==0)
        {
            even.push_back(s[i]);
        }
        else
        {
            odd.push_back(s[i]);
        }
    }
    sort(even.begin(),even.end());
    sort(odd.begin(),odd.end());
    int x=even.size();
   if(n%2==0)
   {
    for(int i=0;i<x;i++)
    {
        cout<<even[i]<<odd[i];
    }
    
   }
   else{
    for(int i=0;i<x-1;i++)
    {
        cout<<even[i]<<odd[i];
    }
        cout<<even[x-1];

   }
    cout<<endl;
}
}

}