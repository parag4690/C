#include <stdio.h>
#include <string.h>
struct  student
{
    char name[50] ;// can't write structure a function name[50];
    int roll;   // roll =  92 // it will not work only in c++
    int marks[3];
    float avg;
    char grade;
    /* data */
}s={"pranav" , 1038 , 97 , 98 , 99 , 98 , 'A'} , s1;

// method two 
struct student stu={"praful" , 1028 , 97 , 98 , 99 , 98 , 'A'};

int main(){
    // we don't know order
   struct student studen={.roll=992 , .name="parag" , .marks[0]=99 , .marks[1]=98 , .marks[2]=100 , .grade='A' , .avg=99.9 };
   struct student studen1;
   strcpy(studen1.name , "baba");
   printf("%d\n" , studen.roll);
   printf("%s\n" , studen1.name);
   // array of structure
   
   // 
 // %.3f //  
}
