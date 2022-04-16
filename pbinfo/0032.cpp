void P(int &n,int &c){
    int p=1,x=0;
    while(n){
        if(n%10 !=c){
            x=x+n%10*p;
            p*=10;
        }
        n/=10;
    }
    n=x;
}