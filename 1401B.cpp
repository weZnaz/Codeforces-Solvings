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
//MrBeast
void weZnaz()
{
    int u2,u1,u0,n2,n1,n0;
    cin>>u0>>u1>>u2>>n0>>n1>>n2;
    if(u0>=n2)
    {
        
        u0=u0-n2;
        n2=0;
    }
    if(n2>u0)
    {
        n2=n2-u0;
        u0=0;
    }
    if(n2>=u2)
    {
        n2=n2-u2;
        u2=0;
    }
    if(n2<u2)
    {
        u2=u2-n2;
        n2=0;
    }
    int ans=min(u2,n1)*2+min(u1,n2)*(-2);
    cout<<ans<<endl;
 
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
