int sum_div(int n){
    int suma = 1 + n;
    for(int i = 2;i <= n/2;i++){
        if(n%i==0){
            suma+=i;
        }
    }
    return suma;


}