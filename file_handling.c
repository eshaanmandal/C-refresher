#include <stdio.h>


void read_an_entire_file(char * filename) {
	FILE * fptr = fopen(filename, "r");
	char buffer[512];

	while(fgets(buffer, 512, fptr))
		printf("%s",buffer);

	fclose(fptr);
}
int main() {

	read_an_entire_file("dummy.txt");
	return 0;
}