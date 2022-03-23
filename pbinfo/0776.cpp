#include <iostream>
using namespace std;
int main()
{
    int a[100][100],n,m,i,j,ok = 1,x,linii=0;
    cin >> n >> m;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            cin >> a[i][j];
        }
    }
    for(i=0;i<n;i++){
        ok = 1;
        x = a[i][0];
        for(j=1;j<m;j++){
            if(a[i][j] !=x){
                ok = 0;
            }
        }
        if(ok ==1){
            linii++;
        }
    }
    cout << linii << endl;
    return 0;
}