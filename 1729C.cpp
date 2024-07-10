#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
    string s;
    int cnt=0,flag=0;
    cin>>s;
    string c="";
    c=c+s[0];
    char first=s[0];
    char last=s[s.size()-1];
    
    multimap<char,int>mp;
    if(s[0]<=s[s.size()-1]){
    for(int i=1;i<s.size()-1;i++)
    {
        if(s[i]>=first && s[i]<=last)
        {
            mp.insert({s[i],i+1});
            c=c+s[i];cnt++;
        }
    }
    }
    else
    {
      for(int i=1;i<s.size()-1;i++)
    {
        if(s[i]<=first && s[i]>=last)
        {
            mp.insert({s[i],i+1});
            c=c+s[i];cnt++;
        }
    }
      flag=1;
    }
    c=c+s[s.size()-1];
   //cout<<c<<endl;
   sort(c.begin(),c.end());
   int sum=0;
   for(int i=0;i<c.size()-1;i++)
   {
      sum=sum+abs(c[i]-c[i+1]);
   }
    cout<<sum<<" "<<cnt+2<<endl; 
    cout<<"1 ";
    
    //
    if(flag==0){
    for(auto &i:mp)
    {
        cout<<i.second<<" ";
    }
    }
    else
    {
      for(auto i = mp.rbegin(); i != mp.rend(); ++i)
      {
       cout << i->second << " ";
      }
    }
    
    
    
    
    
    cout<<s.size()<<endl;
    }
    
}
