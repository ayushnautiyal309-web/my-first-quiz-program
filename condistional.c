#include <stdio.h>
 int main(){
int marks;
 printf("enter your marks");
 scanf("%d", &marks);

if (marks>=90)
printf("congretulation  your grade is A+\n");

 else if (marks<90 && marks>=50)
 printf( "your grade is A\n");

 else if (marks<50 && marks>=36)
printf ("your grade is c\n");

else {//no condition match
printf ("you are fail\n");
}
 return 0;
}
