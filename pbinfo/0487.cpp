#include <iostream>
using namespace std;
int main()
{
    int a[1000], n, medie=0, x = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        medie += a[i];
    }
    medie = medie / n;
    for (int i = 0; i < n; i++) {
        if (medie < a[i]) {
            x++;
        }
    }
    cout << x << endl;
}
