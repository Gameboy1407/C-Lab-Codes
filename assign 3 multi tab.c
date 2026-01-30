#include <stdio.h>
int main(){
   int a, mult,i;
   i=1;
   printf("enter the number\n");
   scanf("%d",&a);
   while (i<=10) {
      mult=a*i;
      i=i+1;
      printf("the table of the number= %d\n",mult);
}
return 0;
}