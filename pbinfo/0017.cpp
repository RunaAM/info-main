void sum_div(int n,int &c){
    int i;
    if(n==1 || n==0){
        c=1;
    }else{
        c=1+n;
    }
    for(i=2;i*i<n;i++){
        if(n%i==0){
            c+=i+n/i;
        }
    }
    if(i*i ==n){
        c+=i;
    }
}