#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
#define int long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const int mx = 5e6 + 1;
int arr[mx], temp[mx];
void Unravel(){
    int n ; cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        arr[i] -= 1;
    }
    vector<int> temp(n,0);
    bool ok = 1;
    temp[arr[0]] = 1;
    for (int i = 1; i < n; i++) {
        if (arr[i] > 0 && arr[i] < n - 1 && temp[arr[i] - 1] == 1 || temp[arr[i] + 1] == 1) {
            temp[arr[i]] = 1;
            continue;
        } else if (arr[i] == 0 && temp[arr[i] + 1] == 1) {
            temp[arr[i]] = 1;
            continue;
        } else if (arr[i] == n - 1 && temp[arr[i] - 1] == 1) {
            temp[arr[i]] = 1;
            continue;
        } else {
            cout << "NO" << nl;
            return;
        }
    }
    cout << "YES" << nl ;
}

int32_t main() {
    optimize();
    int t;
    cin >> t;
    while(t--) {
        Unravel();
    }
    return 0;
}
