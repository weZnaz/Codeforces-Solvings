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
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int l=-1,r=-1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==arr[i+1])
        {
            l=i+1;
            break;
        }
    }
    for(int i=n-1;i>=0;i--)
    {
        if(arr[i]==arr[i-1])
        {
            r=i-1;
            break;
        }
    }
    if(l==-1 && r==-1 || r<l)
    {
        cout<<"0\n";
    }
    else if(l==r)
    {
        cout<<"1\n";
    }
    else{
        cout<<r-l<<endl;
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
