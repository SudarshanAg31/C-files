#include<stdio.h>
struct student{
    char name[25];
    int rollnumber;
};
int main(){
struct student student1={"sudarshan agrawal",1};
struct student student2={"tanvi agrawal",10};
struct student student3={"sagar agrawal",11};
struct student student4={"harshit agrawal",13};

 struct student students[]={student1,student2,student3,student4};
 for(int i=0; i < sizeof(students)/sizeof(students[0]);i++){
    printf("%-20s\t ",students[i].name);
    printf("%d\n",students[i].rollnumber);
 }
    return 0;
}