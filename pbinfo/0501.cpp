#include <iostream>
using namespace std;
int main()
{
    int a[500],x,n,ok = 1;
    cin >>n;
    for(int i = 0;i <n;i++){
        cin >> a[i];
    }
    x = a[0];
    for(int i = 1;i <n;i++){
        if(x != a[i]){
            ok =0;
        }
    }
    if(ok ==0){
        cout << "NU" << endl;
    }else{
    cout << "DA" << endl;}
    return 0;
}