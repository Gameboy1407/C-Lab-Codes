#include<stdio.h>

struct student
{
    int roll;
    char name[20];
    int m1,m2,m3;
};

int main()
{
    int n,i,total;
    float per;

    printf("Enter number of students : ");
    scanf("%d",&n);

    struct student s[n];

    for(i=0;i<n;i++)
    {
        printf("\nEnter roll : ");
        scanf("%d",&s[i].roll);

        printf("Enter name : ");
        scanf("%s",s[i].name);

        printf("Enter marks in 3 subjects : ");
        scanf("%d%d%d",&s[i].m1,&s[i].m2,&s[i].m3);
    }

    printf("\nStudent Results:\n");

    for(i=0;i<n;i++)
    {
        total=s[i].m1+s[i].m2+s[i].m3;
        per=total/3.0;

        printf("\nRoll = %d",s[i].roll);
        printf("\nName = %s",s[i].name);
        printf("\nTotal = %d",total);
        printf("\nPercentage = %.2f\n",per);
    }

    return 0;
}