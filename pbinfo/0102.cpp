#include <iostream>
using namespace std;
int main(){
    int n,r;
    cin >>n;
    r = n%10 + (n%100)/10;
    cout <<r;
}