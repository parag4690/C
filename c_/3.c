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
}s={"pranav" , 1038 , 97 , 98 , 99 , 98 , 'A'};

// method two 
struct student stu={"praful" , 1028 , 97 , 98 , 99 , 98 , 'A'};

int main(){
   struct student studen={"parag" , 992 ,98,99,100, 99 ,'A'};
//    studen = {"parag" , 992 ,98,99,100, 99 , 'A'};  error // c++ me bhi nhi hoga 

    printf("%s\n" ,studen.name );
    printf("%s\n" , stu.name);
    printf("%s\n" , s.name);
//    // if i doesn't order different
//    // 
//    struct student faltu = {'A' , "parag" , 998, 88 , 39 , 20};
//    // it will give random value

  // if i doesn't know order of variable
  // designation initialization

  

}
