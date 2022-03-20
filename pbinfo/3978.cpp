#include <iostream>
using namespace std;

int main(){
    int a,b,c,d=0;
    cin >>a>>b>>c;
    for(int i=a;i<=b;i++){
        d+=i;
    }
    cout <<d <<" ";
    d =0;
    for(int i=b;i<=c;i++){
        d+=i;
    }
    cout <<d <<" ";
    d =0;
    for(int i=a;i<=c;i++){
        d+=i;
        
    }
    cout <<d <<" ";
    d =0;
    return 0;
}