#include <bits/stdc++.h>

using namespace std;
#define ll long long int
bool isprime(ll n)
{
    if(n <= 1)
        return false;
    for(ll i=2; i<sqrt(n); i++)
        if(n % i == 0)
            return false;
    return true;
}
bool biased_decision()
{
    /*The srand() function sets the starting point for producing a series of pseudo-random integers. 
    If srand() is not called, the rand() seed is set as if srand(1) were called at program start.
     Any other value for seed sets the generator to a different starting point.*/
    srand(time(0));
    ll a = rand();
    cout<<a<<endl;
    return isprime(a);
}

int main() {

    if(biased_decision())
        cout<<"Go For It!\n";
    else
        cout<<"Don't Do It!\n";
    return 0;
}
