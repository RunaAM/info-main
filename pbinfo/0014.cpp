int prim(int n){
    int i;
    for(i=2;i*i<=n;i++){
        if(n%i==0){
            return 0;
        }
    }
    if(n==0 || n==1){
        return 0;
    }
    return 1;
}