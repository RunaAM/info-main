void duplicare(int &n){
    int x = 0,con=1;
    while(n>0){
        if((n%10)%2 ==0){
            x=((n%10)/2)*con+x;
            con*=10;
        }
        x=(n%10)*con +x;
        con*=10;
        n/=10;
    }
    n=x;
}