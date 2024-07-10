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
        intx n;
        cin>>n;
        intx arr[n];
        for(intx i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        intx maxx=INT_MIN;
        for(intx i=1;i<=n;i++)
        {
            if(n%i!=0)continue;
            intx x=n/i;
            intx mx=INT64_MIN,mn=INT64_MAX;
            for(intx j=0;j<n;j=j+x)
            {   intx sum=0;
                for(intx l=j;l<j+x;l++)
                {
                    sum=sum+arr[l];
                }
                mx=max(mx,sum);
                mn=min(mn,sum);
                sum=0;
 
            }
            maxx=max(maxx,mx-mn);
            
        }
        cout<<maxx<<endl;
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
