#include <stdio.h>
#include <stdlib.h>

extern char **environ;
int main(int argc, char *argv[])
{
  int counter = 0;
  char **p;
  printf("Number of arguments: %d \n", argc-1); // FOR 1.2 TASK
  for (p = environ; *p != NULL; p++) 
    counter+=1; /* FOR 1.1 TASK */
  printf("Number of environment variables: %d \n", counter); // FOR 1.1 TASK

  printf("Task 1.3 ----------------\n");
  counter = 0; // TASK 1.3
  for (p=environ; *p != NULL; p++){
    if (counter < 10){
       printf("%s\n", *p);
       counter+=1;
    } 
  }

  printf("Task 1.4 ----------------\n");
  char *tmp; // TASK 1.4
  counter = strtol(argv[1], &tmp, 10);
  for (p=environ; *p != NULL; p++){
    if (counter < 10){
       printf("%s\n", *p);
       counter+=1;
    } 
  }
 

}
// printenv | wc -l -- checking for 1.1 task
