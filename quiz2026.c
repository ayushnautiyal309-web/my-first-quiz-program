#include <stdio.h>
char answer;
int score =0;
printf("----------------------------\n");
printf("welcome in gk quiz  2026\n");
printf("-----------------------------\n");

printf("Q.1 = who is the president in current time?/n");
printf("a. dropati murmur./n");
printf("b.  narendra modi/n.");
printf("c.  sapna negi./n");
printf("d.  sumit negi./n");
printf("your option id (a/b/c/d)/n");
scanf("%c",&answer); 
if (answer=='d' |if answer=='D'){
printf("correct answer/n/n");
score++;}
else {
printf("false,correct is a%%d/n/n");
}
return 0;
}
