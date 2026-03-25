#include <stdio.h>

struct Emp{
    int id;
    float salary;
};

int main(){
    struct Emp e;

    printf("Enter ID and Salary: ");
    scanf("%d%f",&e.id,&e.salary);

    printf("ID=%d Salary=%.2f",e.id,e.salary);
}