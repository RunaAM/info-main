#include <iostream>
#include <cstring>
using namespace std;

//Eroare Segmentation fault (core dumped)
char* Trim(char s[]){
    char aux[101];
    int n = strlen(s);
    for(unsigned int i =0;i<n && s[i] == ' ';i++){
        strcpy(aux,s +i+1);
        strcpy(s+i,aux);
        i--;
        n--;
    }
    n = strlen(s);
    for(unsigned int i =n-1;i>=0 && s[i] == ' ';i--){
        strcpy(aux,s +i+1);
        strcpy(s+i,aux);
        i++;
        n--;
    }
    return s;
}
int main(){

    char s[101];
    cin.get(s,101);
    cout << Trim(s)<< endl;
    return 0;
}