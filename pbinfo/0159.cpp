#include <iostream>
using namespace std;
int main()
{
    int n,i,j,p,a[50];
    cin >> n;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=0;i<n;i++){
        if(a[i]%2==0){
            p=i+1;
            for(j=n;j >=p;j--){
                a[j+1]=a[j];
            }
            a[j+1]=a[j]*2;
            n++;
            i++;
        }
    }
    for(i=0;i<n;i++){
        cout << a[i]<<" " ;
    }
    return 0;
}