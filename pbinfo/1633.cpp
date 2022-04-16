void dublare1(int &n){
    int p=1,k,nr=n;
    while(nr){
        k = nr%10;
        p*=10;
        nr/=10;
    }
    n=n+p*k;
    
        
}