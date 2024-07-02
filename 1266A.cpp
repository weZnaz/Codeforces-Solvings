#include <bits/stdc++.h>
using namespace std;
//may allah destroy israel
//Bismillah
#define intx int64_t
#define ull unsigned long long
#define mod 1000000007
void weZnaz()
{
    int sumfor3=0;int x=0;int zero=0,even=0;
     
  string s;
  cin>>s;
  int arr[s.length()];
  for(int i=0;i<s.length();i++)
  {
    arr[i]=s[i]-'0';
  }
for(int i=0;i<s.length();i++)
  {
   sumfor3=sumfor3+arr[i];
   
  }
  for(int i=0;i<s.length();i++)
  {
    if(arr[i]==0)zero++;
    if(arr[i]%2==0)even++;
  }
if(sumfor3%3==0 && zero>0 && even>1)x=1;

  if(x==1)cout<<"red"<<endl;
  else
  cout<<"cyan"<<endl;
    
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
