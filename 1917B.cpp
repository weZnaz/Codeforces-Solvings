#include <bits/stdc++.h>
using namespace std;
//may allah destroy israel
//Bismillah
#define intx int64_t
#define mod 1000000007
void weZnaz()
{
    int n,sum=0,x=0,b=0;
    cin>>n;
    string s;
    cin>>s;
    set<char>st;
    for(int i=0;i<n;i++)
    {
        if(st.count(s[i]))
        {
            sum=sum+b;  
            
        }
        else{
                sum=sum+b+1;
                b=b+1;
                st.insert(s[i]);
        }
    }
    cout<<sum<<endl;
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
