#include <iostream>
#include <fstream>
#include <iostream>
using namespace std;

int main()
{
    ifstream f("interclasare.in");
    ofstream g("interclasare.out");
    int k,i,j,m,n,a[100000],b[100000],c[200000],x=0;
    f >> m;
    for(i=0;i<m;i++){
        f >> a[i];
    }
    f >> n;
    for(i=0;i<n;i++){
        f >> b[i];
    }

    i=0;
    j=0;
    k=0;
    while(i <m &&j < n){
        if(a[i]<b[j]){
            c[k++] = a[i++];
        }
        else{
            c[k++] = b[j++];
        }
    }
    while(i < m){
        c[k++] = a[i++];
    }
    while(j < n){
        c[k++] = b[j++];
    }
    for(i=0;i<k;i++){
        x++;
        g<< c[i] << " ";
        if(x==10){
            x=0;
            g << endl;
        }
    }
    return 0;
}