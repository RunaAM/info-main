#include <iostream>
using namespace std;
int main()
{
    int a[100][100],i,j,m,n,x,ok;
    cin >>n>>m;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            cin >>a[i][j];
        }
    }
    cin >> x;
    ok=0;
    for(i=0;i<n;i+=n-1){
        for(j=0;j<m;j++){
        if(a[i][j] ==x){
            ok = 1;
            }
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<m;j+=m-1){
           if(a[i][j] ==x){
            ok = 1;
            }
        }
    }
    if(ok==1){
        cout <<"DA"<<endl;
    }
    else{
        cout << "NU" << endl;
    }
    return 0;
}