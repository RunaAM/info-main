#include <iostream>
using namespace std;
int main(){
    int a[1000], n, min, max,dif,x = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    min = a[0];
    max = a[0];
    for (int i = 1; i < n; i++) {
        if (min > a[i]) {
            min = a[i];
        }
        if (max < a[i]) {
            max = a[i];
        }
    }
    dif = max - min;
    for (int i = 0; i < n; i++) {
        if (a[i] == dif) {
            x++;
        }
    }
    cout << x<< endl;
}