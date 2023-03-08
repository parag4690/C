#include <stdio.h>

int main(){
    int a[4]= {1,2,3,4};
    sort(a , a+4);
    int n=(sizeof(a)/sizeof(a[0]));
    printf("%d %d" , n , a[sizeof(a)] ); // IMP
    if(1.2f==1.2f)
     printf("yes");
    float b=1.22; 
    if(b==1.22)
     printf("yesss");
    // char arr[]={'p' , 'a' , 'r' , 'a' , 'g'};
    // n=sizeof(a)/sizeof(arr[])
}