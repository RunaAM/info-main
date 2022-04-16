void oglindit(int n,int &c){
    c = 0;
    while(n){
        c*=10;
        c+=n%10;

        n/=10;
    }
}