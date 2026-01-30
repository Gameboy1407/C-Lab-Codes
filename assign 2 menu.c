#include<stdio.h>
int main() {
int ch, a,b;
 printf("enter the choice =\n");
 printf("enter the first no= \n ");
 scanf("%d",&a);
 printf("enter the second no= ");
 scanf("%d",&b);
 scanf("%d",&ch);
 switch (ch) {
   case 1:
       printf("add=%d",a+b);
    break;
 case 2:
       printf("sub=%d",a-b);
    break;
}
return 0;
}