#include <bits/stdc++.h>
using namespace std;
//may allah destroy israel
//Bismillah
#define intx int64_t
#define mod 1000000007
void weZnaz()
{
       int n;              cin>>n;
        vector<int> d(n);
        for(int i=0;i<n;i++){
            cin>>d[i];
        }
 
        vector<int> a(n);   a[0]=d[0];
 
        if(n==1){
            cout<<a[0]<<endl;
            return;
        }
 
        bool bug=false;
        for(int i=1;i<n;i++){
            if(a[i-1]-d[i]<0 or d[i]==0){
                a[i]=a[i-1]+d[i];
            }
            else{
                bug=true;
                break;
            }
        }
        if(bug){
            cout<<-1<<endl;
        }
        else{
            for(int i=0;i<n;i++){
                cout<<a[i]<<" ";
            }
            cout<<endl;
        }
    

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
