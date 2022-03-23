#include <iostream>
using namespace std;

int main()
{
    int i,p,x,a[10000],n;
    cin >> n;
    cin>> x;
    cin >> p;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=n;i >=p-1;i--){
        a[i+1]=a[i];
    }
    n++;
    a[i+1] = x;
    for(i=0;i<n;i++){
        cout << a[i] << " ";
    }
    return 0;
}