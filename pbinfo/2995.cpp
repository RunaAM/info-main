void inserare( int &n){
    int x=0,p=1,c,z;
    while(n/10!=0){
        z=n%10;
        c=abs(z-(n/10%10));
        x+=z*p;p*=10;
        x+=c*p;p*=10;
        n/=10;
    }
    x+=(n%10)*p;
    n=x;
}