#include <iostream>
#include <cstring>
using namespace std;
int main(){
    char s[21],vocale[]="aeiou";
    cin >>s;
    for(int i =0; i< strlen(s);i++){
        if(strchr(vocale,s[i])!=NULL){
            s[i] -='a'- 'A';
        }
    }
    cout << s<<endl;
    return 0;
}