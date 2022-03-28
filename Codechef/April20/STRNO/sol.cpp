#include <bits/stdc++.h>
#define f(i, n) for(ll i=0; i<n; i++)
typedef long long int ll;
#define iAmSpeed ios_base::sync_with_stdio(false);cin.tie(NULL);

using namespace std;

ll getNumOfPowerOfPrimeFactors(ll n) { 
	ll count = 0;
	while (n % 2 == 0) { 
		count++;
		n = n/2; 
	} 

	for (ll i = 3; i <= sqrt(n); i = i + 2) { 
		while (n % i == 0) { 
			count++;
			n = n/i; 
		} 
	} 

	if (n > 2) 
		count++;

	return count;
} 

int main(){
    iAmSpeed
    ll t;
    cin>>t;
    while(t--){
        ll x, k;
        cin>>x>>k;
        ll num = getNumOfPowerOfPrimeFactors(x);
        if(k <= num) cout<<"1\n";
        else cout<<"0\n";
        
    }
    return 0;
}