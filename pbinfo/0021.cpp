void sum_cif(int x,int &s){
    s=0;
    while(x !=0){
        s+=x%10;
        x/=10;
    }
}