int fact(int a){
    int p=1;
    while(a>0){
        p*=a;
        a--;
    }
    return p;
}