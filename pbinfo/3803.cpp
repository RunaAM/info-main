#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;
int main(){
    int n,l;
    double a;
    cin >>n>>l;
    a =0.25* n *pow(l,2) * pow(tan(M_PI/n),-1);
    cout << fixed <<setprecision(2)<<a;
    return 0;
}