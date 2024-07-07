#include<bits/stdc++.h>
using namespace std ;
#define nl "\n" 
#define int long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(n) cout << fixed << setprecision(n);

int32_t main()
{
    optimize();
    int t ; cin >> t ;
    while(t--){
        int n ; cin >> n ;
        if((n/2)%2!=0) cout << "NO" << nl;
        else {
            cout << "YES"<<nl;
            int cnt = 0 , sum = 0 , temp = 0 ;
            for(int i=2 ; i<=n ; i+=2){
                sum += i ;
                cout << i << " ";
            }
            for(int i=1 ; i<n-1 ; i+=2) {temp += i ; cout << i << " ";}
            cout << sum - temp << nl ;
        }
    }
    return 0;
}