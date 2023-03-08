#include <stdio.h>

int main(){
    int n;
    scanf("%d" , &n);
    int help=1;
    for(int i=0; i<n+1; i++){
        for(int j=0; j<i; j++){
            printf("  ");
        }
        for(int j=0; j<n+1-i; j++){
             printf("%d " , n-j-i);
        }
        for(int j=0; j<n-i; j++){
            printf("%d " , j+1);
        }
        printf("\n");
    }
    for(int i=0; i<n; i++){
        int x=help;
        for(int j=0; j<n-i-1; j++){
            printf("  ");
        }
        for(int j=0; j<=i+1; j++) printf("%d ",x--);
        for(int j=0; j<=i; j++) printf("%d " , j+1);
        printf("\n");
        help++;

    }
}