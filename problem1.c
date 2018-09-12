#include <stdio.h>
#include <stdlib.h>

int main() {

	int n, PID;

	n = 10;
	PID = fork();

	if (PID < 0)
		return EXIT_FAILURE;

	if (PID > 0)
		printf("Hello from parent [%d - %d]\n", PID, n);

	if (PID == 0)
		printf("Hello from child [%d - %d]\n", PID, n);

}
