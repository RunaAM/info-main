#include <iostream>
#include <math.h>
using namespace std;
int nrmaxim(int n){
    int contor=0;
    int aux = n;
    while(aux !=0){
        contor++;
        aux/=10;
    }
    int mare = 0;
    int cifra,nr_cifre;
    nr_cifre = contor;
    int putere = pow(10,nr_cifre-1);
    while(contor>0){
        cifra = n/10;
        n = cifra * putere + n% putere;
        if(mare < n){
            mare = n;
        }
        contor--;
    }
    return mare;
} int multiplu(unsigned int n){
   int next=1,m=n,ok = 0;
   while(ok ==0){
       m=n*next;
       if(((float)sqrt(m)*(float)sqrt(m))==m)
           ok=1;
       next++;
   }

   return m;

}
int suma(int a,int b){
    int sumaa = 1;
    if(a%b==0){
        sumaa+=a;
    }
    else if(b%a==0){
        sumaa+=b;
    }
    int x;
    (a>=b)? x=a : x=b;
    for(int i =2;i*i <x;i++){
        if(a%i ==0 &&b%i==0){
            sumaa+=i;
        }
    }
    return sumaa;

}
int main(){
    cout << suma(20,12)<<endl;

}
