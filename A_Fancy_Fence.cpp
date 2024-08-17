#include<bits/stdc++.h>
using namespace std ;
#define nl "\n" 
#define int long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(n) cout << fixed << setprecision(n);

int32_t main()
{
    optimize();
    int t; cin >> t ;
    while(t--){
        int angle ; cin >> angle ;
        if(360 % (180-angle) == 0) cout << "YES" << nl ;
        else cout << "NO" << nl ;
    }
    return 0;
}