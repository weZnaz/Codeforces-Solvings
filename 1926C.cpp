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
const intx mx=200'007;
intx arr[mx];
int vivid(intx x)
{
    intx sum=0;
    while(x!=0)
    {
        intx r=x%10;
        sum=sum+r;
        x=x/10;
    }
     return sum;
}
void weZnaz()
{
   
    int boom;
    cin>>boom;
    cout<<arr[boom]<<endl;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    intx test = 1;
      arr[1]=1;
    for(intx i=2;i<mx;i++)
    {
        arr[i]=arr[i-1]+vivid(i);
    }
   cin >> test;
    while (test--)
    {
       
        weZnaz();
    }
    return 0;
}
