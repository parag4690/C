#include <stdio.h>
#include <string.h>
struct  student
{
    char name[50] ;
    int roll;   
    int marks[3];
    float avg;
    char grade;
};


int main(){
   struct student stu[2];

  for(int i=0; i<2; i++){
    
    char x[20];
    printf("Name of Student %d " , i+1 );
    printf(":");
    scanf("%s" , x);
    strcpy(stu[i].name , x);
    int rolln , sum=0 , mar;
    printf("Roll of %s " , x);
    scanf("%d" , &rolln);
    stu[i].roll=rolln;
    for(int j=0; j<3; j++){
        printf("Marks of subject %d " , j+1);
        scanf("%d" , &mar);
        stu[i].marks[j]=mar;
        sum+=mar;
    }
    stu[i].avg=sum/3.0;
    int check = (int)stu[i].avg;
    if(check>=90) stu[i].grade='A';
    else if(check<90 && check>=75) stu[i].grade='B';
    else if(check<75 && check>=50) stu[i].grade='C';
    else stu[i].grade='E';
    printf("\n");
  }
  printf("\n\n\n\n");
  for(int i=0; i<2; i++){
    printf("Student : %d \n", i+1);
    printf("Name : %s\n" , stu[i].name);
    printf("Roll : %d\n" , stu[i].roll);
    printf("Marks : [ ");
    for(int j=0; j<3; j++){
        printf("%d ", stu[i].marks[j]);
    }
    printf("]\n");
    printf("Avg %.2f\n" , stu[i].avg);
    printf("Grade : %c\n" , stu[i].grade);
    printf("\n");
  }
}
