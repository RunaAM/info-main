void perm(int &n){
    int m=n,cnt=0,p=1;
    while(m){
        p*=10;
        m/=10;
    }
    p/=10;
    n=n%p*10+n/p;
    
}