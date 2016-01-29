#include <stdio.h>
#include <stdlib.h>

#include <editline/readline.h>

static char input[2048];

int main(int argc, char** argv) {
	
	puts("Lispy Version 0.1");
	puts("Press Ctrl+c to Exit\n");

	while(1) {
		
		char* input = readline("lispy> ");

		add_history(input);

		printf("%s\n", input);

		free(input);
	}
	return 0;
}