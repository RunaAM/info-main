int nr_cif(int n,int k){
    int contor = 0,x;
    while(n !=0){
        x = n%10;
        if(  x!= 0 && k%x == 0){
            contor++;
        }
        n/=10;
    }
    return contor;
}