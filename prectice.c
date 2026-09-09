#include<stdio.h>
 int main(){
	int a;     //a is  basic sellery 
	printf("what is your basic sellery.....\n");
	scanf("%d",&a);
	int h;
	int d;
	int t;
	int gross;
	
	h= a*0.1;
	
	d= a*1.5;
	t= a*0.5;
	gross = a+h+d+t;
	printf("your gross sellry is =%d\n",gross);
	return 0;
}
