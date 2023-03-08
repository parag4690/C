#include <stdio.h>

int main(){
    int n;
    scanf("%d" , &n);
     int x=n;
    for(int i=0; i<n+1; i++){
        int y=x , h;
        for(int j=0; j<=i; j++) printf("%d" , n-j);
        for(int j=0; j<n-i; j++) printf(" ");
        for(int j=0; j<n-i-1; j++) printf(" ");
        if(i==n) h=i-1;
        else h=i;
        for(int j=0; j<=h; j++) printf("%d" , y++);
        printf("\n");
        if(i<n-1)
        x--;
    }
    x=1;
    for(int i=0; i<n; i++){
        int y=x;
        for(int j=0; j<n-i;j++) printf("%d",n-j);
        for(int j=0; j<=i; j++) printf(" ");
        for(int j=0; j<i; j++) printf(" ");
        for(int j=0; j<n-i; j++) printf("%d",y++);
        printf("\n");
        x++;
    }
}