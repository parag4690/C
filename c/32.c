#include <stdio.h>

int main(){
    int n;
    scanf("%d" , &n);
    for(int i=0; i<n; i++){
        for(int j=0; j<2*n-1; j++){
            if(i==0 && j>=n-1)
                printf("*");
            else if(i==n-1 && j<=n-1) printf("*");
            else if(i==0 || i==n-1) printf(" ");
            if(i!=0 &&  i!=n-1){
               if((i+j)%(n-1)==0) printf("*");
              else printf(" ");
            }
        }
        printf("\n");
    }
}