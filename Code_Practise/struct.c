#include <stdio.h>
#include <string.h>

struct employee
{
    char name[15];
    float salary;
    int age;
};
// struct employee 2{
//     char name[15];
//     float salary;
//     int age;
// };
// struct employee 3{
//     char name[15];
//     float salary;
//     int age;
// };
// struct employee 4{
//     char name[15];
//     float salary;
//     int age;
// };

int main()
{
    struct employee Employee[3];
    int i;

    for (i = 0; i < 3; i++)
    {
        printf("Enter the details of employee :\n");
        printf("Name: ");
        scanf("%s", Employee[i].name);

        printf("Salary: ");
        scanf("%f", &Employee[i].salary);

        printf("Age: ");
        scanf("%d", &Employee[i].age);
    } printf("\n");

    printf("The Employee structure is: \n");


    for (i = 0; i < 3; i++)
    {
        printf("Employee %d\n", i + 1);

        printf("Name : %s\n", Employee[i].name);

        printf("Age : %d\n", Employee[i].age);

        printf("Salary : %f\n", Employee[i].salary);

        printf("\n");
    }
    return 0;
}