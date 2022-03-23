#include <iostream>
using namespace std;
int main()
{
    int a[1000], n, min, max,imin,imax;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    min = a[0];
    max = a[0];
    for (int i = 1; i < n; i++) {
        if (min > a[i]) {
            min = a[i];
            imin = i;
        }
        if (max < a[i]) {
            max = a[i];
            imax = i;
        }
    }

    cout << imin +1<< " " << imax +1<< endl;
}