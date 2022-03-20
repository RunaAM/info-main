#include <iostream>
#include <math.h>
void Impare(int &n){
    int x = n;
    int p = 0;
    int resultat = 0;
    while(x!=0){
        if((x%10)%2 !=0){
            resultat += ((x%10)-1)*pow(10,p);
            p++;
        }
        else{
            resultat += (x%10)*pow(10,p);
            p++;
        }
        x/=10;
    }
    n = resultat;

}
int main(){
    int n=235690;
    Impare(n);
    std::cout << n;
    return 0;
}