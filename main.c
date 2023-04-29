#include <stdio.h>

void err(char* msg) {
	fprintf(stderr, "Error: %s\n", msg);
}

int main(int argc, char* argv[]) {
	if (argc != 1) {
		err("Wrong number of arguments");

		return 1;
	}

	printf("--");

	return 0;
}
