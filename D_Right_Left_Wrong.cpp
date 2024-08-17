#include<bits/stdc++.h>
using namespace std ;
#define nl "\n" 
#define int long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(n) cout << fixed << setprecision(n);
const int M = 5e6 + 1;
int n, m, k, a, b, ans, arr[M], br[M];
int l, r;
void Unravel(){
    cin >> n;
    a = 0;
    for (int i = 0; i < n; i++) {
        cin >> b;
        a += b;
        arr[i] = a;
    }
    
    string str; cin >> str;
    ans = 0;
    l = 0, r = n - 1;

    // vector<int> v;
    // for (int i = 0; i < n; ++i) {
    //         if (s[i] == 'L') {
    //             a += a[i];
    //             v.push_back(arr[n-1-i] - arr[i]);
    //         } else {
    //             v.push_back(arr[i] - arr[n-1-i]);
    //         }
    //     }
    
    while (l < r) {
        if (str[l] == 'L' and str[r] == 'R') {
            ans += arr[r] - arr[l - 1];
            l++, r -= 1;
            // cout << l << " " << r ;
        }
        while (str[r] != 'R' and r >= 0) r--;
        while (str[l] != 'L' and l < n) l++;
    }
    cout << ans << nl;
}

int32_t main()
{
    optimize();
    int t ;
    cin >> t ;
    while(t--){
        Unravel();
    }
    return 0;
}
