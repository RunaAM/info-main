int cmmnr(int a){
    int fr[10]={0},i,j,s=0,p=1;
    while(a>0){
        fr[a%10]++;
        a/=10;
    }
    for(i=9;i>=0;i--){
        for(j=1;j<=fr[i];j++){
            s=s*10+i;
        }
    }
    return s;
}