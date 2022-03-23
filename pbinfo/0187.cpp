#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ifstream f("ciffrecv.in");
    ofstream g("ciffrecv.out");
    int i,j,x,ok,k=0,fr[10]={0};
    while(f>>x){
        fr[x]++;
    }
    for(i=9;i>=0&& k==0;i--){
        if(fr[i]>0){
            ok=1;
            for(j=2;j*j<=i;j++){
                if(i%j==0){
                    ok=0;
                }
            }
            if(ok ==1){
                g<<i<<" " <<fr[i];
                k=1;
            }
        }
    }
    return 0;
}