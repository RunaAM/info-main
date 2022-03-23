//sub 3
#include <iostream>
#include <cstring>
using namespace std;
int main(){

    char s[101], *p , a[201] = "", vocale[]="aeiou";
    cin.get(s,101);
    p = strtok(s, " ");
    bool ok = true;
    while(p){
        ok = true;
        for(int i =0;i < strlen(p);i++){
            if(strchr(vocale, p[i]) ==NULL){
                ok = false;
            }
        }
        if(ok == true){
            strcat(a, p);
            strcat(a, " ");
            strcat(a, p);
            strcat(a, " ");
        }
        else{
            strcat(a, p);
            strcat(a, " ");
        }
        p=strtok(NULL , " ");

    }
    cout << a;
    return 0;
}