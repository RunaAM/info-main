#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char s[101], cifre[] = "1234567890",a[101];
    cin.get(s, 101);
    int j = 0; //contor pentru a
    for (int i = 0; i < strlen(s); i++) { //trece prin fiecare caracter din sir
        if (strchr(cifre, s[i]) != NULL) {// verifica daca caracterul e o cifra
            a[j] = s[i]; 
            j++; // crestem contorul
        }
    }
    a[j] = NULL; // punem caracterul de inchiere
    if (strlen(a) == 0) {
        cout << "SIR VID" << endl; // daca nu e sir atunci va afisa asta

    }
    else {
        cout << a << endl; 
    }
}
