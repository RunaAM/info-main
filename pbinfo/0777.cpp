#include <iostream>
using namespace std;
int main()
{
    int x=0,i,j,coloane=0,a[100][100],n,m,ok;
    cin>>n>>m;
    for (i = 0; i<n;i++){
        for(j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    for (j = 0; j<m;j++){
        ok=1;
        for(i=0;i<n;i++){
            for(x=i+1;x<n;x++){
              if(a[i][j] == a[x][j]){
                ok=0;
              }

            }
        }
        if(ok==1){
            coloane++;
        }
    }
    cout<<coloane<<endl;
    return 0;
}