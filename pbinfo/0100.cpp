#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream f("nrapprime.in");
    ofstream g("nrapprime.out");
    int a[100],n,prime = 0,ok;
    f >> n;
    for(int i = 0;i < n; i++){
        f  >> a[i];
    }
    for(int i = 0;i<n;i++){
        ok = 1;
        if(a[i] < 2){
           ok = 0;
        }
        for(int j = 2;j*j<=a[i];j++){
            if(a[i]%j==0){
                ok = 0;
            }
        }
        if(ok ==1){
            prime++;
        }
    }
    g << prime;
    return 0;
}