#include <stdio.h>

void letterG(int i , int n){
     for(int j=0; j<n; j++){
            if(i==0)
              printf("*");
            else{
              if(j==0) printf("*");
              if(i<n/2) printf(" ");
              else{
                if(i==n/2)
                if(j>=n/2) printf("*");
                else printf(" ");
                if(i==n-1){
                    if(j<=n/2 || j==n-1) printf("*");
                    else printf(" ");
                }

                //
                if(i!=n/2 && i!=n-1){
                    if(j==n/2 || j==n-1) printf("*");
                    else printf(" ");
                }
              }
            }
        }
}

void letterp(int i , int n){
    for(int j=0; j<=n/2; j++){
            if(j==0){
                printf("*");
            }
            if(j!=0 && j!=(n/2)){
            if(i==0 || i==(n/2)){
              printf("*");
            }
            else printf(" ");
            }
            if(j==(n/2) && i<n/2 && i!=0)
              printf("*");
            else printf(" ");
        }
}

void letterA(int i , int n){
      for(int j=0;j<=2*n-1; j++){
            if(i==(n/2) && j>=n-i && j<=n+i)
              printf("*");
            else{
            if(j==n-i || j==n+i)
              printf("*");
            else
              printf(" ");
            }
        }
          printf("  ");

}

void letterR(int i , int n){
   
      for(int j=0; j<=n/2; j++){
            if(j==0){
                printf("*");
            }
            if(j!=0 && j!=(n/2)){
            if(i==0 || i==(n/2)){
              printf("*");
            }
            else printf(" ");
            }
            if(j==(n/2) && i<n/2 && i!=0)
              printf("*");
            else if(i>n/2 && j!=0){
              
                if(i-n/2==j) printf("*");
                else printf(" ");
            }
            else printf(" ");
        }
}

int main(){
    int n=8;
    // scanf("%d" , &n);

    for(int i=0; i<n; i++){
        
        
        letterp(i , n);
        letterA(i , n);
        letterR(i , n);
        letterA(i , n);
        letterG(i , n);
    
        printf("\n");
    }

}