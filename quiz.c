
#include <stdio.h>
int main() {
   char answer;
  int score = 0;

printf("===============================================\n");
printf("     welcome to the c language Quiz !           \n");
printf("================================================\n");

    // Question 1
    printf("1. Who invented the C programming language?\n");
    printf("a) Bjarne Stroustrup\n");
    printf("b) Dennis Ritchie\n");
    printf("c) James Gosling\n");
    printf("d) Guido van Rossum\n");
    printf("Your Answer (a/b/c/d): ");
    scanf(" %c", &answer);

    if (answer == 'b' || answer == 'B') {
        printf("-> TRUE! Correct Answer.\n\n");
        score++;
    } else {
        printf("-> FALSE! Incorrect Answer. Correct option is (b) Dennis Ritchie.\n\n");
    }

    // Question 2
    printf("2. What does the main() function in C return by default?\n");
    printf("a) float\n");
    printf("b) void\n");
    printf("c) int\n");
    printf("d) char\n");
    printf("Your Answer (a/b/c/d): ");
    scanf(" %c", &answer);

    if (answer == 'c' || answer == 'C') {
        printf("-> TRUE! Correct Answer.\n\n");
        score++;
    } else {
        printf("-> FALSE! Incorrect Answer. Correct option is (c) int.\n\n");
    }

    // Question 3
    printf("3. Which compiler is used to compile C programs in Ubuntu terminal?\n");
    printf("a) gcc\n");
    printf("b) javac\n");
    printf("c) python3\n");
    printf("d) g++\n");
    printf("Your Answer (a/b/c/d): ");
    scanf(" %c", &answer);

    if (answer == 'a' || answer == 'A') {
        printf("-> TRUE! Correct Answer.\n\n");
        score++;
    } else {
        printf("-> FALSE! Incorrect Answer. Correct option is (a) gcc.\n\n");
    }

    // Question 4
    printf("4. Which keyword is used to terminate or exit a loop prematurely?\n");
    printf("a) continue\n");
    printf("b) exit\n");
    printf("c) break\n");
    printf("d) return\n");
    printf("Your Answer (a/b/c/d): ");
    scanf(" %c", &answer);

    if (answer == 'c' || answer == 'C') {
        printf("-> TRUE! Correct Answer.\n\n");
        score++;
    } else {
        printf("-> FALSE! Incorrect Answer. Correct option is (c) break.\n\n");
    }

    // Question 5
    printf("5. Which format specifier is used to print an integer value in C?\n");
    printf("a) %%f\n");
    printf("b) %%s\n");
    printf("c) %%c\n");
    printf("d) %%d\n");
    printf("Your Answer (a/b/c/d): ");
    scanf(" %c", &answer);

    if (answer == 'd' || answer == 'D') {
        printf("-> TRUE! Correct Answer.\n\n");
        score++;
    } else {
        printf("-> FALSE! Incorrect Answer. Correct option is (d) %%d.\n\n");
    }

    // Final Result
    printf("========================================\n");
    printf("QUIZ COMPLETED!\n");
    printf("Your Final Score: %d / 5\n", score);
    printf("========================================\n");

  
return 0   ;
}
