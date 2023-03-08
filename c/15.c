#include <stdio.h>

int main(){
    int n;
    scanf("%d" , &n);

    int counter=1 , x=0 , c=1;
    for(int i=0; i<n; i++){
         x+=c; c+=1;
    } 
    x--;
    char h=x+'A';
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(j<n-1-i)
              printf(" ");
            else printf("*");
        }
        for(int j=0; j<n; j++){
            if(j<=i){
              printf("%d " , counter);
              counter++;
            }
            else printf(" ");
        }
        printf("\n");

    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(j<i) printf(" ");
            else{
                printf("%c" , h);
                h--;
            }
        }
        for(int j=0; j<n-i; j++ ){
            printf("#");
        }
        printf("\n");
    }
}