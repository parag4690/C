#include <stdio.h>

int main(){
    int n;
    scanf("%d" , &n);

    for(int i=0; i<n; i++){
        int x=i+1;
        for(int j=0; j<n-1-i; j++) printf(" ");
        for(int j=0; j<=i; j++) printf("%d", x++);
        x--;
        for(int j=0; j<i; j++) printf("%d" ,--x);
        printf("\n");
    }
    for(int i=0; i<n-1; i++){
        int x=n-1-i;
        for(int j=0; j<=i; j++) printf(" ");
        for(int j=0;j<n-1-i; j++) printf("%d" , x++);
        --x;
        for(int j=0; j<n-2-i; j++) printf("%d" , --x);
        printf("\n");
    }
}