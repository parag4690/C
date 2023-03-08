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
};
// struct variable allows to access struct memebers
// we cann't initializestruct members at the time struct declaration  // imp
// can't write function  in structure
struct student stu;
// access memeber ways two type

/*

1) . using dot operator
2) -> arrow operator // using pointer // pointer to structure // or structure pointer



*/

int main// can't write structure a function 
(){
   struct student studen;
//    int studen;
//    studen.name = "paragsj"; =>  error 
//    gets(studen.name);
   /* name is exception
   
    header_file = string.h
    strcpy(studen.name , "parag"); 


    */
   strcpy(studen.name , "parag sharma");
   studen.roll = 23;
   studen.marks[0]=100;
   printf("Name : %s\n Roll: %d\n" , studen.name , studen.roll);

   //       pointer     

   struct student *ptr=&studen; // studen agr nhi // struct memory allocate continus 

   ptr->roll=92;
   strcpy(ptr->name , "Parag Sharma");
   printf("Name : %s\n Roll: %d\n" , ptr->name , ptr->roll);
}
