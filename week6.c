#include <stdio.h>

struct Student{
    char name[20];
    int marks;
};

int main(){
    struct Student s;
    struct Student *ptr = &s;

    printf("Enter name: ");
    scanf("%s", ptr->name);

    printf("Enter marks: ");
    scanf("%d", &ptr->marks);

    printf("Name: %s\nMarks: %d", ptr->name, ptr->marks);
}