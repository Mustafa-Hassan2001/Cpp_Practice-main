#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n, x, pos1 = -1, pos2 = -1, count = 0;
        cin>>n;cout<<n<<" ";
        string ans("YES\n");
        for(ll i=0; i<n; i++){
            cin>>x;
            
            if(x == 1){
                pos2 = pos1;
                pos1 = i;
                count++;
            }
            cout<<pos1<<" "<<pos2<<" ";
            if(count > 1){
                if(abs(pos1 - pos2) < 6){ 
                    ans = "NO\n";
                }
            }
        }
        cout<<ans;
    }
}