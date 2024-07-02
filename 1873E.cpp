#include <bits/stdc++.h>
#define intx int64_t
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        intx n, k;
        cin >> n >> k;
        vector<intx> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        intx up = 1e10;
        intx down = 1;
        while (down < up - 1) {
            intx mid = (up + down) / 2;
            intx water = 0;
            for (intx i = 0; i < n; i++) {
                if (arr[i] < mid) {
                    water += mid - arr[i];
                }
            }
            if (water > k) {
                up = mid;
            } else {
                down = mid;
            }
        }
        cout << down << endl;
    }
    return 0;
}
