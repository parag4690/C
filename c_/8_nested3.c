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
    struct student stu;

    scanf("%s", stu.name); // string me & jruri nhi
    scanf("%d", &stu.roll);
    scanf("%d", &stu.dob.dd);
    scanf("%d", &stu.dob.mm);
    scanf("%d", &stu.dob.yyyy);

    printf("%s\n", stu.name);
    printf("%d\n", stu.roll);
    printf("%d\n", stu.dob.dd);
    printf("%d\n", stu.dob.mm);
    printf("%d\n", stu.dob.yyyy);
}
