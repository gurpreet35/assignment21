// Define a structure Employee with member variables id, name, salary
#include<stdio.h>
#include<stdlib.h>
struct Employee{
    int id;
    char name[15];
    long int salary;
};
void display(struct Employee E1)
{
    printf("the Id,name,Salary:");
    printf("%d\n",E1.id);
    puts(E1.name);
    printf("%ld",E1.salary);
}

int main(){
    struct Employee E1={ 1,"preet",1200000};
    display(E1);
    return 0;
}