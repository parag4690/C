#include <stdio.h>

// stuct ka name or variabe name same ho skta hai  //  impp

struct student
{
    char name[30];
    int roll;
    struct Dob
    {
        int dd;
        int mm;
        int yyyy;
        /* data */
    } dob;
};

int main()
{
    struct Dob doby = {.dd=10 , .mm=06 , .yyyy=2003};
  // 1st method // struct student stu = {.name="parag" , .roll=992  , .dob=doby }; // if i dont' dob then it will take zero
  // 2nd method 
    struct student stu = {"parag" , 992 , {10 , 06 , 2003}};

    printf("%s\n", stu.name);
    printf("%d\n", stu.roll);
    printf("%d\n", stu.dob.dd);
    printf("%d\n", stu.dob.mm);
    printf("%d\n", stu.dob.yyyy);
}
