#include <stdio.h>


int main(){
    int n;
    scanf("%d" , &n);
    int c=0 , c1=2*n;
    for(int i=0; i<n; i++){
        int k=0;
        for(int j=0; j<2*n; j++){ // 2*row-1
           if(j>=i && j<=2*n-i-1) {
              if(j<((2*n)/2)) { printf("%c" , k+65); k++;}
              else { k--; printf("%c" , k+65);}
           }
           else printf(" ");
        }
        printf("\n");
    }
   
    return 0;
}