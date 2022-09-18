// Write a function to take input employee data from the user. [ Refer structure from
// question 1 ]
#include<stdio.h>
#include<stdlib.h>
struct Employee{
    int id;
    char name[15];
    long int salary;
};
struct Employee input(){
    struct Employee b;
    printf("Entrer the Id,name,Salary:");
    scanf("%d",&b.id);
    fflush(stdin);
    fgets(b.name,50,stdin);
    scanf("%ld",&b.salary);
    return b ;
}
void display(struct Employee E1)
{
    printf("the Id,name,Salary:");
    printf("%d\n",E1.id);
    puts(E1.name);
    printf("%ld",E1.salary);
}

int main(){
    struct Employee E1,E2;
    E1=input();
    display(E1);
    E2=input();
    display(E2);

    
    return 0;
}