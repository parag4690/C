#include <stdio.h>

int main(){
    int n;
    scanf("%d" , &n);
   int f=1;
    for(int i=0; i<n; i++){
            if(i%2==0) f=1;
            else f=0;
         for(int j=0; j<=i; j++){
             if(f){
                if(j%2==0) printf("1 ");
                else printf("0 ");
             }
             else {
                if(j%2==0) printf("0 ");
                else printf("1 ");
             }
         }
         printf("\n");
    }
    printf("\n");

    /*
    
    if(j==1) print(i);
    j--;
    j++;
    
    */
}