#include <stdio.h>



int main(){
    int n=6;
    int arr[]={ 543 ,1101 , 998 , 1015 , 663 , 999 };
    for(int i=0; i<=n-2; i++){
        int check=0;
        for(int j=0; j<=n-2-i; j++){
            if(arr[j]>arr[j+1]){
                int t=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=t;
                 check=1;
            }
        } 
        if(check==0) break;
    }
    for(int i=0; i<n; i++){
        printf("%d " , arr[i]);
    }
    
    printf("\n%d\n" , arr[n/2] );
}