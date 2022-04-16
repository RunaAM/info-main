void sumcif(int x,int &s,int &t){
    s=0;t=0;
    while(x !=0){
        ((x%10)%2 ==1)? t+=x%10 : s+=x%10;
        
        x/=10;
    }
}