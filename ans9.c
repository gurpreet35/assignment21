// Write a program to store information of n students and display them using structure
#include<stdio.h>
#include<stdlib.h>
struct Student{
    int id;
    char name[15];
    long int Roll_no;
};
struct Student input(){
    struct Student b;
    printf("Entrer the Id,name,Roll_no:");
    scanf("%d",&b.id);
    fflush(stdin);
    fgets(b.name,50,stdin);
    scanf("%ld",&b.Roll_no);
    return b ;
}
void display(struct Student E1)
{   
    printf("\nthe Id,name,Roll_no:\n");
    printf("%d\n",E1.id);
    puts(E1.name);
    printf("%ld\n",E1.Roll_no);
}

int main(){
    int n;
    printf("Enter the number of Student:");
    scanf("%d",&n);
    struct Student e[n];
    for (int i = 0; i < n; i++)
    {
        e[i]=input();
    }
    
    for (int i = 0; i < n; i++)
    {
        display(e[i]);
    }
    return 0;
}