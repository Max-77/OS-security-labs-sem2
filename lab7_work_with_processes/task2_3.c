#include <stdio.h>
#include <unistd.h>

int main(void)
{
  int pid = 0;

  for(int i = 0; i < 10; i++) { // FOR TASK 2.4 CHANGE 10 to tested value
    pid = fork();
    if (pid == 0) 
      break;
   }

  if (pid == 0) {
    printf("Сообщение из дочернего элемента\n");
    int id_of_child = getpid();
    int id_of_parent = getppid();
    printf("Идентификатор дочернего процесса: %d\n", id_of_child);
    printf("Идентификатор родительского процесса: %d\n", id_of_parent);
    printf("Это сообщение из дочернего процесса\n");
    sleep(5); // FOR TASK 2.2
  }
  else if (pid > 0) {
    printf("Это сообщение из родительского процесса.\n"
           "Идентификатор дочернего процесса:  %d\n", pid);
    sleep(2); // FRO TASK 2.2
  }

  return 0;
}
