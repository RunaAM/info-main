#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int a;
    cin >> a;

    cout << (int)((3*(pow(a,2)+pow(a,4)))/(pow(a,2)+pow(a,4)+pow((pow(a,2)+pow(a,4)),0.5)) +pow((pow(a,2)+pow(a,4)),0.5));
    return 0;
}