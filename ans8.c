//  Write a program to store information of 10 students and display them using structure.
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
    struct Student e[10];
    for (int i = 0; i < 10; i++)
    {
        e[i]=input();
    }
    
    for (int i = 0; i < 10; i++)
    {
        display(e[i]);
    }
    return 0;
}