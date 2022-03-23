#include <iostream>
#include <cstring>
using namespace std;
int main(){
    char s[101], *p, *v, s2[101];
    int poz;
    cin.get(s,101);
    p = strtok(s," ");
    while(p){
        v = strchr(p, ',');
        if(v != NULL){
            poz = v-p;
        }
        p[poz] = NULL;
        strcat(s2,p);
        strcat(s2, " ");
        p = strtok(NULL, " ");

    }
    cout << s2;
    return 0;
}