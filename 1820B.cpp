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
void weZnaz()
{
    
    string s;
    intx countx=0,maxc=INT_MIN,cnt=0;
    cin>>s;
    intx xx=s.size();    s=s+s;
    for(intx i=0;i<s.size()-1;i++)
    {
        if(s[i]=='1' && s[i+1]=='1')countx++;
        else{
            
            countx=0;
        }
        if(countx>maxc)
            {
                maxc=countx;
            }
        if(s[i]=='1')cnt++;
    }
    if(cnt==0)maxc=-1;
    
    intx x=maxc+1;
    if(cnt==1)x=1;
    if(x==1)cout<<"1"<<endl;
    else if(x==0)
    {
        cout<<"0\n";
    }
    else if(x==s.size())
    {
      cout<<xx*xx<<endl;
    }
    else
    {
        cout<<((x+1)*(x+1))/4<<endl;
    }
   
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
