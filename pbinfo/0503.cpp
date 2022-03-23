#include <iostream>
using namespace std;
int main()
{
    int n, a[1000],ok=1;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n-1; i++){
        if (a[i] == 1 && a[i + 1] == 1) {
            ok = 0;
        }
    }
    if (ok == 0) {
        cout << "NU" << endl;
    }
    else {
        cout << "DA" << endl;
    }
}