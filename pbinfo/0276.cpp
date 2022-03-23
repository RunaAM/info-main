#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int i,x, fr[100] = {0};
    ifstream f("pareimpare.in");
    ofstream g("pareimpare.out");
    while(f>>x){
        fr[x]++;
    }
    for(i=1;i<100;i+=2){
        if(fr[i] >0){
            g << i << " ";
        }
    }
    g << endl;
    for(i=98;i>=0;i-=2){
        if(fr[i] >0){
            g << i << " ";
        }
    }
    g << endl;
    return 0;
}