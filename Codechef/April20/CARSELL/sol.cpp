#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define mod 1000000007 ;

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll a[n];
        for(ll i=0; i<n; i++) cin>>a[i];
        sort(a, a+n, greater<ll>());
        ll ans = 0;
        for(ll i=0; i<n; i++){  
            if((a[i] - i) >= 0){
                ans += (a[i] - i);
                ans %= mod;
            }  
        }
        cout<<ans<<endl;
    }
    return 0;
}