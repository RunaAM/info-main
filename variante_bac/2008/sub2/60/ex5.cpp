#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char s[51];
    int fr[26]={0};
    cin.get(s,51);
    for(int i =0; i< strlen(s);i++){
        if(s[i] >='a' && s[i] <='z'){
            fr[(int)s[i]-97]++; //convertim din char in int pentru a indexa in vectorul de frecventa
        }
    }
    int max = 0, k=0;
    for(int i=0;i<26;i++){
        if(max < fr[i]){
            max =fr[i];
            k=i;
        }
    }
    cout << (char)(k+97);
    return 0;
}