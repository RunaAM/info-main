void detcifre(int x,int &p,int &u){
    p =0;

    u = x%10;
    while(x >0){
        p = x%10;
        x/=10;
    }
}