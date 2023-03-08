#include <stdio.h>

int main(){
    int n;
    scanf("%d" , &n);
    int k=n/2;
    if(n%2==0) k--;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
           if(i==k)
            printf("*");
           else{
            if(j==k)
             printf("*");
             else printf(" ");
           }
        }
        printf("\n");
    }
}