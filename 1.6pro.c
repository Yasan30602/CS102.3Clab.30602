#include<stdio.h>
int main()
{
    int byear,age;
    char sname;

    printf("Enter student name ");
    scanf("%s",&sname);
    printf("Enter birth year ");
    scanf("%d",&byear);

    age = 2023 - byear;

    printf("Your age is %d \n",age);

    return(0);
}
