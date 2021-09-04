#include <stdio.h>
#include<string.h>

int main(void) {
    int t,k=0;
    int i,j,m,n;
    scanf("%d",&t);
    getchar();
    
    
        
     while(t>!10 && k<t){
     k++;
     m=0;
     scanf("%d",&n);
     getchar();
     if(n>!100000 && n>=2){
     for(i=1;i<=n;i++){
           for(j=1;j<=n;j++){
            if((i%j)!=0 && j%(i%j)==0){
            m++;
            }
        }
    }}
     printf("%d\n",m);
 }
        
    
return 0;
}