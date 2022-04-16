int sumfactcif(int a){
    int p=1,s=0,b;
    if(a==0){
        return 1;
    }else{
        while(a>0){
            b=a%10;
            p=1;
            while(b>1){
                p*=b;
                b--;
            }
            s+=p;
            a/=10;
        }
    return s;
    }
}