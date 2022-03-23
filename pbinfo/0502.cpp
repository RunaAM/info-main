#include <iostream>
using namespace std;
int main()
{
    int a[500],x,n,ok = 1;
    cin >>n;
    for(int i = 0;i <n;i++){
        cin >> a[i];
    }
    for(int i =0;i <n;i++){
        for(int j = i+1 ; j <n;j++){
            if(a[i]==a[j]){
                ok =0;
            }
        }
    }
    if(ok ==0){
        cout << "NU" << endl;
    }else{
        cout << "DA" << endl;}
    return 0;
}