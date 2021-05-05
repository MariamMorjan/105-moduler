
// Moduel 3
// Oppgave 3.21
// Write a C program 



#include <stdio.h>         
#include <sys/types.h>
#include <unistd.h>

int main()
{
	

	int n=0;
	int k=0;
	
	pid_t pid;

// En Do-while loop som sjekker at tallet som er satt inn er et tall over 0

 
		do {

 printf("Må være et nummer høyere enn 0 for å kjøre denne algoritmen.\n");
 
 scanf("%d", &k);
	
		}while (k <= 0);


		pid = fork();

		if (pid == 0)
		{
			printf("Child prosessen tar tallet dit og utfører algoritmen.\n");
			printf("%d\n",k);
			while (k!=1)

// Så lenge k ikke er 1 vil conjectire bli utført

			{
				if (k%2 == 0)
				{
					k = k/2;
				}
				else if (k%2 == 1)
				{
					k = 3 * (k) + 1;
				}	
	
		// I aloritmen vil tallene bli printet ut etter hver runde
				printf("%d\n",k);
			}
		
			printf("Child processen er ferdig.\n");
		}
		else
		{
			printf("Parents venter på child prosessen...\n");
		
			printf("Parent prosessen er ferdig.\n");
		}
	return 0;
} 
