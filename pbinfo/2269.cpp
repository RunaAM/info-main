#include <iostream>
using namespace std;
int main()
{
    int x,n,i,j,k,ok=0,fr[81]={0},suma=0;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>x;
        while(x !=0){
            suma+=x%10;
            x=x/10;
        }
        fr[suma]++;
        suma=0;
    }
    for(k=0;k<81;k++){
        if(fr[k]>0){
            for(i=1;i<fr[k];i++){
                for(j=i+1;j<=fr[k];j++){
                    ok++;  
                }
            }
        }
    }
    cout<<ok << endl;
    return 0;
}