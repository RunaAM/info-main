#include <iostream>

using namespace std;

int main(){
    int a , b ,c;
    cin >> a>>b>>c;
    cout << c/(a*b)<<endl;
    cout << (c%(a*b))/b << endl;
    cout << (c%(a*b))%b << endl;
    return 0;
}