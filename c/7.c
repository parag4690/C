#include <stdio.h>


int main(){
    int x , n;
    scanf("%d" , &x);
    n=(x+1)/2;;
    int c=0 , c1=2*n-3;
    for(int i=0; i<n; i++){
        for(int j=0; j<n+c; j++){ // 2*row-1
            if(j<n-1-i) printf("     ");
            else printf("*    ");
        }
        c+=1;
        printf("\n");
    }
    for(int i=0; i<n-1; i++){
        printf ("     ");
         for(int j=0; j<c1; j++){
            if(j>=i) printf("*    ");
            else printf("     ");
         }
         c1-=1;
         printf("\n");
    }
    return 0;
}