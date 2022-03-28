#include <bits/stdc++.h>
using namespace std;

void computeLPS(string pat, int lps[]){
    int len = 0;
    int i = 1;
    lps[0] = 0;

    while(i < pat.size()){
        if(pat[len] == pat[i]){
            lps[i] = len + 1;
            len++;
            i++;
        }
        else{   // pat[len] != pat[i]
            if(len !=0){
                len = lps[len -1];
            }
            else{
                lps[i] = 0;
                i++;
            }
        }
    }

}

bool KMP(string pat, string txt){
    int patLen = pat.size();
    int txtLen = txt.size();

    int lps[patLen] = {0};

    computeLPS(pat, lps);

    int txtIndex = 0;
    int patIndex = 0;

    while(txtIndex < txtLen && patIndex < patLen){
        if(txt[txtIndex] == pat[patIndex]){
            txtIndex++;
            patIndex++;
        }
        else{
            if(patIndex != 0){
                patIndex = lps[patIndex - 1];
            }
            else{
                txtIndex++;
            }
        }
    }
    if(patIndex == patLen)
        return true;
    
    return false;
}

int main(){
    string pat, txt;
    cin>>txt>>pat;
    if(KMP(pat,txt))
        cout<<"Found\n";
    else
        cout<<"Not Found\n";
    
    return 0;
}