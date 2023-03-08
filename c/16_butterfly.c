#include <stdio.h>

int main(){
    int n;
    scanf("%d" , &n);
    int d=n;
    for(int i=0; i<n+1; i++){
        int x=n , y=d ;
        for(int j=0; j<n+1; j++){
            if(j<=i){
                printf("%d " , x); x--;
            }
            else printf("  ");
        }
        for(int j=0; j<n; j++){
            if(j<n-1-i)
             printf("  ");
            else{
                printf("%d " , y);
                y++;
            }
        }
        if(i<n-1)
        d--;
        printf("\n");
    }
    d=1;
    for(int i=0; i<n; i++){
       int x=n , y=d;
       for(int j=0; j<n+1; j++){
        
            if(j<n-i){ printf("%d " , x);
            x--;
            }
            else printf("  ");
        
       }
       for(int j=0; j<n; j++){
            if(j<i)  printf("  ");
            else{
                printf("%d " , y);
                y++;
            }
       }
       d++;
       printf("\n");
    }
}