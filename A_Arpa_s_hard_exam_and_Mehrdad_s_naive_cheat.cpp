#include<bits/stdc++.h>
using namespace std ;
#define nl "\n" 
#define int long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(n) cout << fixed << setprecision(n);

int32_t main()
{
    optimize();
    int n ; cin >> n ;
    if(n==0) cout << 1 << nl ;
    else if(n%4 == 0 ) cout << 6 << nl ;
    else if(n%4 == 1) cout << 8 << nl ;
    else if(n%4 == 2) cout << 4 << nl ;
    else if(n%4 == 3) cout << 2 << nl ;
    return 0;
}
