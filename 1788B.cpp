/*for thoose numbers whose reminder is 19 after %20 ..code gets longer.but i did it in detail..in first for others number in works n/2 0r (n+1)/2,(n-1)/2 rule then come the other part*/



#include<bits/stdc++.h>
using namespace std;
//vai ses koira delo
int arrtoint(int ar[],int siz)
{
    string ss="";
    for(int i=0;i<siz;i++)
    {
        ss += '0' + ar[i];
    }
    int m=stoi(ss);
    return m;
 
}
int dosum(int nn)
{
     int sum = 0;
    while (nn != 0) {
        sum += nn % 10;
        nn /= 10;
}
return sum;
}
int main()
{
    int t;
    cin>>t;
    while(t!=0)
    {
    int n;
    cin>>n;
    if(n%2==0)
    {
        cout<<n/2<<" "<<n/2<<endl;
    }
    else
    {
        if(n%20!=19)
        cout<<(n+1)/2<<" "<<(n-1)/2<<endl;
        else
        {
            string s=to_string(n);
            int arr[s.size()];
            for(int i=0;i<s.size();i++)
            {
              arr[i]=s[i]-'0';
            }
            int sumx=0;
            int sumy=0;
            int x[s.size()];
            int y[s.size()];
            int xx=0;
            int one=1,two=1;
            for(int i=s.size()-1;i>=0;i--)
            {
                int a=arr[i]/2;
                int b=arr[i]-a;
                if(sumx<=sumy)
                {
                    x[i]=max(a,b);
                    y[i]=min(a,b);
                    sumx=sumx+x[i];
                    sumy=sumy+y[i];
                }
                else
                {
                     x[i]=min(a,b);
                    y[i]=max(a,b);
                    sumx=sumx+x[i];
                    sumy=sumy+y[i];
                }
            }
 
 
                  int vai=arrtoint(x,s.size());
                  int bon=arrtoint(y,s.size());
 
       cout<<vai<<" "<<bon<<endl;
 
       
        }
    }
    t--;
    
}
}
