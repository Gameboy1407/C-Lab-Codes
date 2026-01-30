#include <stdio.h>
void main(){
int a;
printf("Enter the year=");
scanf("%d",&a);
if(a%400==0){
printf("the year is lwap year= %d",a);
}
else if(a%100==0){
printf("not a leap year%d",a);
}
else if(a%4==0){
printf("leap year%d",a);
}
else {
printf("not leap year%d",a);
}
}