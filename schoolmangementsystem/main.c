#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

int main()
{
int i;
student s[20];
student *ptrs= s;
while(1)
{
printf("welcome to the shcool system\n");
printf("choose activity: \n");
printf("------------------------------------------------------\n");
printf("1-add new student\n");
printf("2-delete a student\n");
printf("3-display student's data\n");
printf("4-edit student acount\n");
printf("5-rank students\n");
printf("6-update student's score\n");
printf("------------------------------------------------------\n");
scanf("%d",&i);


switch (i)
{

case 1:
    printf("1-add new student\n");
    new_student(ptrs);
    break;
case 2:
    printf("2-delete a student\n");
    delete_student(ptrs);
    break;
case 3:
    printf("3-display student's data\n");
    student_list(ptrs);
    break;
case 4:
    printf("4-edit student acount\n");
    student_edit(ptrs);
    break;
case 5:
    printf("5-rank students\n");
    rank_student(ptrs);
    break;
case 6:
    printf("6-update student's score\n");
    student_score(ptrs);
    break;
}
}

}
