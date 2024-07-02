#include <bits/stdc++.h>
using namespace std;
//may allah destroy israel
//Bismillah
#define intx int64_t
#define mod 1000000007
void weZnaz()
{
    int n;
    int prob=0;
    int match=0;
    cin>>n;
    string s,c="";
    cin>>s;
    int l=0,r=n-1;
    while(l<r)
    {
        if(s[l]==s[r])
        {
            match=match+2;
        }
        else{
            prob++;
        }
        l++;
        r--;
    }
   // cout<<match<<" "<<prob<<endl;
   for(int i=0;i<=n;i++)
   {
    if(i<prob)
    {
        c.push_back(0);
    }
    else if(i==prob)
    {
        c.push_back(1);
        if(n%2!=0)
        {
            c.push_back(1);
        }
        else{
            c.push_back(0);
        }
        
    }
    else if(match>0)
    {
        c.push_back(1);
        if(n%2!=0)
        {
            c.push_back(1);
        }
        else{
            c.push_back(0);
        }
        match=match-2;
    }
    else{
        c.push_back(0);
    }
   }
   for(int i=0;i<=n;i++)
   {
    cout<<(int)(c[i]+'0'-48)<<" ";
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
