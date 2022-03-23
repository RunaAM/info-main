#include <iostream>
using namespace std;
int main()
{
    int i,j,n,a[1000],k,x;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=0;i<n;i++){
        if(a[i]%2==0 ){
            k=i;
            for(j=k;j<n;j++){
                a[j] = a[j+1];
            }
            n--;
            i--;
        }
    }
    for(i=0;i<n;i++){
        cout << a[i] << " ";
    }
    return 0;
}