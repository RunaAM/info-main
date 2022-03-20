#include <iostream>
#include <cstring>
using namespace std;
int main(){

    char s1[101], s2[101],sufix[101];
    cin >>s1 >> s2;
    bool ok =true;
    int k=0;
    for(int i=strlen(s1)-1,j = strlen(s2)-1;j>=0, i>=0;i--,j--){ //trece prin fiecare caracter in sens invers la ambele siruri
        if(s1[i]==s2[j]&& ok == true){
            sufix[k] = s1[i]; // adauga in sufix caracterele comune dar in ordine inversa
            k++;
        }
        else{
            ok = false;
        }
    }
    sufix[k] = '\0';
    for(int i = strlen(sufix)-1;i>=0;i--){
        cout << sufix[i];
    }
    return 0;
}