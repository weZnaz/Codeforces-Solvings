#include <bits/stdc++.h>
using namespace std;
//may allah destroy israel
//Bismillah
//faltu problem
#define intx int64_t
#define mod 1000000007
void weZnaz()
{
    int n;
    int goribs1=0,borolox4=0,mejho2=0,modoobitto3=0;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        
        if(v[i]==1)goribs1++;
        if(v[i]==4)borolox4++;
        if(v[i]==2)mejho2++;
        if(v[i]==3)modoobitto3++;
        
    }
    while(modoobitto3)
    {
        if(goribs1)
        {
            borolox4++;
            goribs1--;
            modoobitto3--;
        }
        else{
            borolox4++;
            modoobitto3--;
        }
 
    }
    if(mejho2%2==0)
    {
        borolox4=borolox4+mejho2/2;
    }
    else{
        borolox4=borolox4+mejho2/2;
        mejho2=1;
        if(goribs1==0)
        {
            borolox4++;
            mejho2--;
        }
        if(goribs1>=2)
        {
            goribs1=goribs1-2;
            borolox4++;
        }
        else
        {if(goribs1==1){
            borolox4++;
            goribs1--;
        }
        }
        
        
    }
    while(goribs1)
        {
           if(goribs1>=4)
           {
            borolox4++;
            goribs1=goribs1-4;
           }
           else if(goribs1>=3)
           {
            borolox4++;
            goribs1=goribs1-3;
           }else if(goribs1>=2)
           {
            borolox4++;
            goribs1=goribs1-2;
           }
           else if(goribs1>=1)
           {
            borolox4++;
            goribs1=goribs1-1;
           }
 
        }
        cout<<borolox4<<endl;
}
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
/*#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
//#endif*/
 
    intx test=1;
//cin>>test;
    while(test--)
    {
        weZnaz();
    }
    return 0;
}
