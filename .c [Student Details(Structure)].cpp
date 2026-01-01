#include <stdio.h>
#include <string.h>

struct Student
{
    int age, rollno;
    char name[20];
    float marks;
};

int main()
{
    struct Student s[3];
    int i;

    for (i = 0; i < 3; i++)
    {
        printf("\nEnter Name, Roll No., Age, Marks of Student %d:\n", i + 1);
        scanf("%s %d %d %f", s[i].name, &s[i].rollno, &s[i].age, &s[i].marks);
    }

    printf("\n---------------- Student Details ----------------\n");

    for (i = 0; i < 3; i++)
    {
        printf("\nStudent %d:", i + 1);
        printf("\nName: %s", s[i].name);
        printf("\nRoll No.: %d", s[i].rollno);
        printf("\nAge: %d", s[i].age);
        printf("\nMarks: %.2f\n", s[i].marks);
    }

    return 0;
}
