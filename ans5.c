// Write a function to sort employees according to their salaries [ refer structure from
// question 1

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
    for ( i = 0; i < size-1; i++)
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
    int n;
    printf("Enter the number of Employees:");
    scanf("%d",&n);
    struct Employee e[n];
    for (int i = 0; i < n; i++)
    {
        e[i]=input();
    }
    salarycounter(e,n);
    for (int i = 0; i < n; i++)
    {
        display(e[i]);
    }
    return 0;
}