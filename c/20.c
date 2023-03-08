#include <stdio.h>

int main(){
    int n;
    scanf("%d" , &n);
    int d=(n+1)/2;
    int y=n-d;
    int counter=d , helper=0 , helper1=0 , helper2=n-1 , helper3=n , help=0;
    int x=1 , m=1 , f=1;
    for(int i=0; i<d; i++){
        int l=x , k=m , f=1;
      for(int j=0; j<=2*(n-1); j++){
          if(j==n-1 && i==0){
            printf("%d ",x);
            helper=j-2; helper1=j+2;
          }
          else if(i==0) 
           printf("  ");
          if(i>0){
             if(j>=helper && j<helper2  ){
                printf("%d " , l); l--;
             }
             else if(j>=helper3 && j<=helper1){
              if(f){
              help=j; f=0;}
              printf("%d " , k++);
             }
             else{
                printf("  ");
             }
          }
      }
      if(i>0){   helper-=2; helper1+=2; helper2--;helper3++; }
      x++;
      printf("\n");
    } 

  ///////
// printf("%d\n" , help-n);
  int spc=2 , counter1=y , lspc=n , counter2=1 , hspc=help-n-1 , pha=0;
// printf("%d\n" , lspc);
for(int i=0; i<y; i++){
    int x=counter1 , k=counter2 , pha=counter1;
    for(int j=0; j<=2*(n-1); j++){
        if(j<spc){
            printf("  ");
        }
        else{
           if(j<lspc && x>0){
            printf("%d " , x--);
           }
           else if(j<n) printf("  ");
           else{
            //   printf("%d" , j);
            if(j>=n && j<n+hspc) printf("  ");
            else{
            //   printf("%d" , x);
              if(k<=pha && i!=y-1) printf("%d " , k++);
              else  printf("  ");
            }
           }
        }
    }
    counter1--;
    printf("\n");
    spc+=2; lspc++; hspc--;
}




}

//
