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
    intx n,sum=0;
    cin>>n;
    map<intx,vector<intx>>mp;
    for(intx i=1;i<=n;i++)
    {
        intx a,b;
        cin>>a>>b;
        mp[a].push_back(b);
    }
 
    for(intx i=0;i<=n;i++)
    {
       if(mp[i].empty())continue;
       else
       {
        sort(mp[i].begin(),mp[i].end(),greater<int>());
       }
    }
 
 
for(intx i=1;i<=n;i++)
{
     if (mp.find(i) == mp.end() || mp[i].empty()) continue;
 
        intx limit = min(i, static_cast<intx>(mp[i].size()));
        for (intx j = 0; j < limit; j++) {
            sum += mp[i][j];
        }
    }
    cout<<sum<<endl;
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
