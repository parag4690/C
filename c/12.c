#include <stdio.h>



int main(){
    int n;
    scanf("%d" , &n);
    int c=1 , p=0;
    for(int i=0; i<n; i++){
        int helper=c , f=1;
        for(int j=0; j<n+p; j++){
            if(j<n-1-i) printf("     ");
            else{
                if(j<n ) {printf("%d    " , helper);
                helper++; }
                else{
                    if(f){ f=0;  helper-=2;
                    }
                    printf("%d    " , helper); helper--;
                }
            }
        }
        p++; c++;
        printf("\n");
    }
    c=n-1 , p=n-2 , n=n-1;
    for(int i=0; i<n; i++){
        int helper=c , f=1;
        for(int j=0; j<n+p+1; j++){
             if(j<=i) printf("     ");
             else{
                if(j<n+1) { printf("%d    " , helper); helper++;}
                else{
                    if(f){
                        f=0; helper-=2;
                    }
                    printf("%d    " , helper); helper--;
                }
             }
        }
        c--; p--;
        printf("\n");
    }
}