#include <stdio.h>

int main(){
    int n;
    scanf("%d" , &n);
    int help1=-1 , help2=-1 ;
    for(int i=0; i<n; i++){
        int f=1;
        for(int j=0; j<2*n-1; j++){
            if(i==0 && j>=(2*n/2)-1  || i==n-1 && j<=(2*n/2)-1) {
                 help1=(2*n/2)-1;
                 help2=(2*n-2);
                 printf("*");
                 f=0;
            }
            else{
                if(j==help1 && f || j==help2&&f) printf("*");
                else printf(" ");
            }
        } help1--; help2--;
        printf("\n");
    }
}