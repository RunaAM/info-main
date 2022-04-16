int multiplu(unsigned int n){
   int next=1,m=n,ok = 0;
   while(ok ==0){
       m=n*next;
       if(((float)sqrt(m)*(float)sqrt(m))==m)
           ok=1;
       next++;
   }

   return m;

}