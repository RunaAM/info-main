#include <iostream>
using namespace std;
int main()
{
    int n, a[100], ok = 1,coount = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        while(a[i] !=0){
            a[i] /=10;
            coount++;
        }
        if(coount %2!=0){
        ok=0;
        }
    }
    if (ok == 1) {
        cout << "DA" << endl;
    }
    else {
        cout << "NU" << endl;
    }
}