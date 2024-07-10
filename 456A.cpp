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
//its a fake 1100* problem dont do it
//                                              bismillah
void weZnaz()
{
    int n,a=0,b=0,flag=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x,y;
        cin>>x>>y;
        if(x==y)
        {
            flag=0;
        }
        if(x>y)a++;
        if(y>x)b++;
        if(a>0 && b>0){
            flag=1;
        }
        
    }
    if(flag==0)
    {
        cout<<"Poor Alex\n";
    }
    else
    {
        cout<<"Happy Alex\n";
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    intx test = 1;
    //cin >> test;
    while (test--)
    {
        weZnaz();
    }
    return 0;
}
