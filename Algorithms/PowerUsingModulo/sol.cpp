#include <bits/stdc++.h>
#define iAmSpeed ios_base::sync_with_stdio(false);cin.tie(NULL);
#define ll long long
const long long mod = 1e9 + 7;
using namespace std;


int fast_pow(long long base, long long n,long long M) 
{
    if(n==0)
       return 1;
    if(n==1)
    return base;
    long long halfn=fast_pow(base,n/2,M);
    if(n%2==0)
        return ( halfn * halfn ) % M;
    else
        return ( ( ( halfn * halfn ) % M ) * base ) % M;
}
int findMMI_fermat(int n,int M)
{
    return fast_pow(n,M-2,M);
}

int main() {
    iAmSpeed

    cout<<fast_pow(256,5,mod);
    
}