#include<bits/stdc++.h>
using namespace std ;
#define nl "\n" 
#define int long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(n) cout << fixed << setprecision(n);

bool unravel(vector<int> v, string str) {
    unordered_map<int, char> mp1;
    unordered_map<char, int> mp2;
    for (int i = 0; i < v.size(); i++) {
        if (mp1.count(v[i]) && mp1[v[i]] != str[i]) return false;
        if (mp2.count(str[i]) && mp2[str[i]] != v[i]) return false;
        mp1[v[i]] = str[i];
        mp2[str[i]] = v[i];
    }
    return true;
}

int32_t main() {
    optimize();
    int t;
    cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> v(n);
        for (auto &i : v ) cin >> i;
        int m; cin >> m;
        for (int i = 0; i < m; i++) {
            string str; cin >> str;
            if (str.size() != n) cout << "NO" << nl;
            else {
                if (unravel(v,str)) cout << "YES" << nl;
                else cout << "NO" << nl;
            }
        }
    }
    
    return 0;
}
