# oppgave-3.21

Oppgavetekst: 
The Collatz conjecture concerns what happens when we take any positiveinteger n and apply the following algorithm:
35, 106, 53, 160, 80, 40, 20, 10, 5, 16, 8, 4, 2, 1Write a C program using the fork() system call that generates this se-quence in the child process. The starting number will be provided fromthe command line. For example, if 8 is passed as a parameter on the com-mand line, the child process will output 8, 4, 2, 1. Because the parent andchild processes have their own copies of the data, it will be necessary forthe child to output the sequence. Have the parent invoke the wait() callto wait for the child process to complete before exiting the program. Per-form necessary error checking to ensure that a positive integer is passedon the command line. 
