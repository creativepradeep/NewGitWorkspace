#include <stdio.h>
int main ()
{
	printf("Adding some lines..adding some more text and resolving conflict\n");
	for (int i = 0; i < 20; ) {
		printf("i = %d\n", i);
		i++;
	}
	return 0;
}

void doWork ()
{
	while (!s_finished) {
		printf("Working..\n");
	}
}
