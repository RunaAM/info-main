#include <iostream>
using namespace std;
int main()
{
    int a[100], n, min, max;
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
    cout << min << " " << max << endl;
}
