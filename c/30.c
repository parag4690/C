#include <stdio.h>

int main(){
    int n; 
    scanf("%d" , &n);
    int nxt=1;
    for(int i=0; i<n; i++){
        int h=nxt;
        for(int j=0; j<n-1-i; j++) printf("  ");
        for(int j=0; j<=i; j++) printf("%d ", h++);
        --h;
        for(int j=0; j<i; j++) printf("%d " , --h);
        nxt++;
        printf("\n");
    }
}