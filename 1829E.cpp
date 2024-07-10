#include <algorithm>
#include <bitset>
#include <cctype>
#include <cerrno>
#include <climits>
#include <cmath>
#include <complex>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <deque>
#include <exception>
#include <fstream>
#include <functional>
#include <iomanip>
#include <ios>
#include <iosfwd>
#include <iostream>
#include <istream>
#include <iterator>
#include <limits>
#include <list>
#include <locale>
#include <map>
#include <memory>
#include <new>
#include <numeric>
#include <ostream>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <stdexcept>
#include <streambuf>
#include <string>
#include <typeinfo>
#include <utility>
#include <valarray>
#include <vector>
using namespace std;
#define intx int64_t
#define mod 1000000007
//                                              bismillah
intx cnt,n,m;
intx arr[1000][1000];
bool aee[1000][1000];
intx xd[]={0,-1,0,1};
intx xdd[]={-1,0,1,0};
 
bool valid(intx l,intx p)
{
   if(l>=0 && p>=0 && l<n && p<m && arr[l][p]>0)
   return true;
   else
   return false;
}
void dfs(int x,int y)
{
    if(aee[x][y]==1) return;
    aee[x][y]=true;
    cnt=cnt+arr[x][y];
    for(intx h=0;h<4;h++)
    {
        intx nb=x+xd[h];int nc=y+xdd[h];
    if(valid(nb,nc))
    {
        dfs(nb,nc);
    }
    }
 
}
void weZnaz()
{
    
    cin>>n>>m;
    
    for(intx i=0;i<n;i++)
    {
        for(intx j=0;j<m;j++)
        {
               cin>>arr[i][j];
        }
    }
    for(intx i=0;i<n;i++)
    {
        for(intx j=0;j<m;j++)
        {
               aee[i][j]=false;
        }
    }
 
intx maxsum=0;
     for(intx i=0;i<n;i++)
    {
        
        for(intx j=0;j<m;j++)
        {    
        if(!aee[i][j] && arr[i][j]>0){
                cnt=0;dfs(i,j);
                maxsum=max(cnt,maxsum);
        }
        }
        
         
    }
    cout<<maxsum<<endl;
 
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    intx test = 1;
    cin >> test;
    while (test--)
    {
        weZnaz();
    }
    return 0;
}
