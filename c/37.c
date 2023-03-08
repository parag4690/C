#include <stdio.h>

int fact(int n){
    int f=1;
    for(int i=1; i<=n; i++) f*=i;
    return f; 
}

int ncr(int n , int r){
    if(n==0 || n==1) return 1;
    return fact(n)/(fact(n-r)*fact(r));
}

int main(){
    int n;
    scanf("%d" , &n);
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++) printf("%d" , ncr(i , j));
        printf("\n");
    }
}