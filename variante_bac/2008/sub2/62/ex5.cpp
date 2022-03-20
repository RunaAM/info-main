#include <iostream>
#include <cstring>
using namespace std;

int main(){

    char s[256];
    const int NR_LITERE = 26;
    int fr[NR_LITERE]={0};
    cin.get(s,256);
    //folosim un vector pentru a memora toate aparitiile fiecarei litere
    for(int i=0;i<strlen(s);i++){
        if(s[i]>='a' && s[i] <= 'z'){
            fr[(int)(s[i]-'a')]++;
        }
        else if(s[i]>='A' && s[i] <= 'Z'){
            fr[(int)(s[i]-'A')]++;
        }
    }
    for(int i =0; i < NR_LITERE;i++){
        if (fr[i]>0) {
            cout << (char)(i + 'a' ) << " ";
        }
    }
    cout << endl;
    return 0;
}