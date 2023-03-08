// Online C compiler to run C program online
#include <stdio.h>


int main() {
    // Write C code here
   // 5 3 2 -1 -4 -5
   // -1 -4 -5 5 3 2
   int n;
   scanf("%d" , &n);
   int a[n];
   for(int i=0; i<n;i++){
    scanf("%d" , &a[i]);
   }
   int neg=n-1 , pos=0;
   while(neg>pos){
       while(a[pos]<0) pos++;
       while(a[neg]>0) neg--;
       printf("%d %d\n" , pos , neg);
       if(a[pos]>0 && a[neg]<0){
       int t=a[pos];
       a[pos]=a[neg];
       a[neg]=t;
       } pos++; neg--;
   }
   for(int i=0; i<n; i++){
      printf("%d " , a[i]);
   }
   printf("/n");
    return 0;
}