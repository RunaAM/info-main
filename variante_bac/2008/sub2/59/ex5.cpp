#include <iostream>
#include <cstring>
using namespace std;
int main(){
    char s[51],cifre[]="0987614532";
    int fr[10]={0};
    cin.get(s,51);
    for(int i=0;i <strlen(s);i++){//trece prin fiecare caracter
        if(strchr(cifre,s[i])!= NULL){
            fr[(int)s[i]-48]++; //adauga nr de aparitii a cifrelor intr-un vector de frecventa

        }
    }
    int max = 0,j=0;
    for(int i=0;i<10;i++){
        if(j < fr[i]){
            max = i; //stoceaza cifra cu cel mai multe aparitii
            j=fr[i]; 
        }
    }
    cout <<max<<endl;
    cin.get();

    return 0;
}