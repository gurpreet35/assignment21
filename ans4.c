// Write a function to find the highest salary employee from a given array of 10
// employees. [ Refer structure from question 1]
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
    printf("\nthe Id,name,Salary:\n");
    printf("%d\n",E1.id);
    puts(E1.name);
    printf("%ld\n",E1.salary);
}
void salarycounter(struct Employee b[],int size){
    int i,j;
    struct Employee temp;
    for ( i = 0; i < size; i++)
    {
        for ( j = i+1; j < size; j++)
        {
            if(b[i].salary>b[j].salary){
                temp=b[i];
                b[i]=b[j];
                b[j]=temp;
            }
        }
    }
    
}
int main(){
    struct Employee e[10];
    for (int i = 0; i < 10; i++)
    {
        e[i]=input();
    }
    for (int i = 0; i < 10; i++)
    {
        display(e[i]);
    }
    salarycounter(e,10);
    printf("\nthe highest salary employee from %d employees is:",10);
    display(e[9]);
    return 0;
}