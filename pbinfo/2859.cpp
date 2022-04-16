int TreiCifImp(int n){
    int ok=0;
    while(n>0){
        if((n%10)%2!=0){
            ok++;
        }else{
            ok=0;
        }
        if(ok==3){
            return 1;
        }
        n/=10;
    }
    return 0;
}