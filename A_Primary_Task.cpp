#include<bits/stdc++.h>
using namespace std ;
#define nl "\n" 
#define int long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(n) cout << fixed << setprecision(n);

// void Unravel(){
//     string str ; cin >> str ;
//     int sum = stoi(str.substr(2));
//     if(str[0]=='1' && str[1] == '0' && str[2] != '0' && sum >= 2 ) cout << "YES" << nl ;
//     else cout << "NO" << nl ;
// }

void Unravel() {
    string str, temp;
    int n; cin >> n;
    if (n <= 10) {
        cout << "NO" << nl;
        return;
    }
    str = to_string(n);
    temp = str;
    str.erase(str.begin());
    str.erase(str.begin());
    if (temp[0] != '1' or temp[1] != '0') {
        cout << "NO" << nl;
        return;
    }
    str = to_string(stoi(str));
    if (stoi(str) < 2) {
        cout << "NO" << nl;
        return;
    }
    if (temp.size() == str.size() + 2) cout << "YES" << nl;
    else cout << "NO" << nl;
    
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
