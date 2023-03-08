#include <stdio.h>

int main(){
   int n;
   scanf("%d" , &n);

   int x=1,z;
   for(int i=0; i<n; i++){
    int y=x;
      for(int j=0; j<=i; j++) printf("%d" , j+1);
      for(int j=0; j<n-1-i; j++) printf(" ");
      if(i==n-1) z=-1;
      else z=n-2-i;
      for(int j=0; j<z; j++) printf(" ");
      if(i==n-1) z=i-1;
      else z=i;
      for(int j=0; j<=z; j++) printf("%d" , y--);
      if(i<n-2)
      x++;
      printf("\n");
   }
}