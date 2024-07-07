#include<bits/stdc++.h>
using namespace std ;
#define nl "\n" 
#define int long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(n) cout << fixed << setprecision(n);

int32_t main()
{
    optimize();
    int t ;
    cin >> t ;
    while(t--){
        int n ; cin >> n ;
        vector <int> v ;
        for(int i=1 ; i<=n/2 ; i++){
            v.push_back(i*(n-i+1));
        }
        for(auto u : v) cout << u << " ";
        if(n%2 != 0) cout << n/2+1 << " ";
        reverse(v.begin(),v.end());
        for(auto u : v) cout << u << " ";
        cout << nl ;
    }
    return 0;
}