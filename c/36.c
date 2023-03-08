#include <stdio.h>

int main(){
    int n;
    scanf("%d" , &n);
     int x=1;
    for(int i=0; i<n; i++){
        int y=x;
        for(int j=0; j<2*(n-i)-1; j++) printf(" ");
        for(int j=0; j<=i; j++) printf("%d" , y--);
        for(int j=0; j<i; j++) printf(" ");
        for(int j=0; j<i-1; j++) printf(" ");
        if(i>0)
        for(int j=0; j<=i; j++) printf("%d", j+1);
        x++;
        printf("\n");
    }
    for(int i=0; i<n-1; i++){
        int y=n-1-i;
        for(int j=0; j<=2*(i+1); j++) printf(" ");
        for(int j=0; j<n-1-i; j++) printf("%d" , y--);
        for(int j=0; j<n-2-i; j++) printf(" ");
        for(int j=0; j<n-3-i; j++) printf(" ");
        y++;
        if(i!=n-2)
        for(int j=0;j<n-1-i; j++) printf("%d" , y++);
        printf("\n");
    }
}