//  Write a program to enter the marks of 5 students in Chemistry, Mathematics and
// Physics (each out of 100) using a structure named Marks having elements roll no.,
// name, chem_marks, maths_marks and phy_marks and then display the percentage
// of each student
#include <stdio.h>
struct marks
{
    int roll_no;
    char name[15];
    int chem_marks;
    int maths_marks;
    int phy_marks;
};
struct marks input()
{
    struct marks b;
    printf("Enter the Roll_no,Name,chem_marks,Math_marks,phy_marks:");
    scanf("%d", &b.roll_no);
    fflush(stdin);
    fgets(b.name, 50, stdin);
    printf("Enter marks under 100 marks:");
    scanf("%d", &b.chem_marks);
    scanf("%d", &b.maths_marks);
    scanf("%d", &b.phy_marks);
    return b;
}
void display(struct marks E1)
{
    float totalmarks = 0;
    printf("\nEnter:\n");
    printf("the Roll_no:%d\n\n", E1.roll_no);
    printf("name:");
    puts(E1.name);
    printf("chem_marks:%d\n\n", E1.chem_marks);
    printf("Math_marks:%d\n\n", E1.maths_marks);
    printf("phy_marks:%d\n\n", E1.phy_marks);
    totalmarks = (E1.chem_marks + E1.maths_marks + E1.phy_marks) / 3;
    printf("\n percentage is:%f", totalmarks);
}

int main()
{
    struct marks s[5];
    for (int i = 0; i < 2; i++)
    {
        s[i] = input();
    }
    for (int i = 0; i < 2; i++)
    {
        display(s[i]);
    }
    return 0;
}