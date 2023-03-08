#include <stdio.h>


int main(){
    int n;
    scanf("%d" , &n);
    int x=1;
    for(int i=0; i<n; i++){
        int c=x;
       for(int j=0; j<2*n; j++){ 
        if(j<n){
           if(j<=i) printf("%d    ", j+1);
           else printf("     ");
        }
        else{
          if(j>n){
           if(j>=2*n-1-i) printf("*");
           else printf("     ");
          }
        }
       }
       if(i<n-2)
       x++;
       printf("\n");
    }
}