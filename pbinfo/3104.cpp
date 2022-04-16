int Egal(int n){
    int x=0, ok = 1;
    while(n >0){
        if((n%10)%2 ==1){
            if(x == 0){
                x = n%10;
            }
            else{
                if(x != n%10){
                    ok = 0;
                    return ok;
                }
            }
        }
        n/=10;
    }
    return ok;
}