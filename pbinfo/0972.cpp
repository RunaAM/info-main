#include <iostream>
#include <cstring>
using namespace std;
int main(){
    char s[256], vocale[]="aeiou";
    int count =0;
    cin.get(s,256);
    for(int i =1;i < strlen(s)-1;i++){
        if(strchr(vocale,s[i]) !=NULL &&strchr(vocale,s[i-1])==NULL&&strchr(vocale,s[i+1])==NULL &&s[i-1]!= ' ' && s[i+1] != ' ' ){
            count++;
            i++;
        }
    }
    cout <<count<<endl;
    return 0;
}