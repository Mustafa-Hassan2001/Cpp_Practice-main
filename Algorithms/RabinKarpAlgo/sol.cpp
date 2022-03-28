/*
input - 
3
ababab ab
aaaaa bbb
aafafaasf aaf

output -
3
1 3 5 
Not Found
1
1
*/
#include<bits/stdc++.h>
using namespace std;

vector < int > RabinKarp(string const &pat, string const &txt){
    const int p = 31;
    const int m = 1e9 + 9;
    int patLen = pat.size();
    int txtLen = txt.size();

    vector < long long > p_pow(max(patLen, txtLen));
    p_pow[0] = 1;
    for(int i = 1; i < (int)p_pow.size(); i++){
        p_pow[i] = (p_pow[i-1] * p) % m;
    }

    vector < long long > txtPrefixHash(txtLen + 1, 0);
    for(int i = 0; i < txtLen; i++){
        txtPrefixHash[i + 1] = (txtPrefixHash[i] + (txt[i] - 'a' + 1) * p_pow[i]) % m;
    }

    long long patHash = 0;
    for(int i = 0; i < patLen; i++){
        patHash = (patHash + (pat[i] - 'a' + 1) * p_pow[i]) % m;
    }

    vector < int > occurences; //contains that starting index of occurences
    for(int i = 0; i + patLen - 1 < txtLen; i++){
        long long currSubstringTxtHash = (txtPrefixHash[i + patLen] + m - txtPrefixHash[i]) % m;
        if(currSubstringTxtHash == patHash * p_pow[i] % m){
            occurences.push_back(i);
        }
    }
    return occurences;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        string txt, pat;
        cin>>txt>>pat;
        vector < int > res = RabinKarp(pat, txt);
        if(res.size()){
            cout<<res.size()<<endl;
            for(int i : res){
                cout<<i + 1<<" "; // +1 as ans requires index based 1
            }
        }
        else{
            cout<<"Not Found";
        }
        cout<<endl;
    }
    return 0;
}