#include <stdio.h>
int main() {
int a = 10;
float b= 3.75;
double c= 8.9999999;
char d= 'A';

printf("int ka size :%lu bytes\n",sizeof(a));
printf ("float ka size : %lu bytes\n", sizeof (b));
printf("double ka size :%lu bytes\n", sizeof (c));
printf("char ka size :%lu bytes\n", sizeof (d));

char ch;
printf("koi bhi ek character type kro:");
scanf("%c",&ch);

printf("character: %c\n",ch);
printf ("ASCII VALUE :%d\n",ch);


float f = 15.98989898;
double g = 15.98989898989898;

printf("float ki value :%f\n",f);
printf("double ki value :%.8lf\n",g);

short int num = 32767;
printf("orignel value : %d\n",num);
 
num =num +8;
printf("8 add krne ke baad (overflow): %hd\n",num);

int num1= 13 , num2= 2;
float exact_evg;

exact_evg = num1/num2;
printf("exact average:%.2f\n",exact_evg);
return 0;
}

