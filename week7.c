#include <stdio.h>

int main(){
    FILE *fp;
    char name[20];

    fp = fopen("data.txt","w");

    printf("Enter name: ");
    scanf("%s", name);

    fprintf(fp,"%s",name);
    fclose(fp);

    printf("Written to file");
}