#include <stdio.h>
#include <stdlib.h>
struct employee{
    char name[30];
    int working;
    int number;
    int Pin;
    float salary;

};

int main()
{
    /* An example of John is used to test it.

    */
    struct employee emp={"JOHN,40,17,7206,KES25"};
    printf("Employee name = %s\n",emp.name);
    printf("Employee working=%d\n",emp.working);
    printf("Employee number=%d\n",emp.number);
    Printf("Employee Pin=%d\n" ,emp.Pin);
    printf("Employee Salary=%f\n" ,emp.salary);

}
