int sumcif(int a){
    int s=0;
    while(a>0){
        s+=a%10;
        a/=10;
    }
    return s;
}