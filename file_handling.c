#include <stdio.h>


void read_an_entire_file(char * filename) {
	FILE * fptr = fopen(filename, "r");
	char buffer[512];

	while(fgets(buffer, 512, fptr))
		printf("%s",buffer);

	fclose(fptr);
}

void write_to_a_file(char * filename) {
	FILE * fptr = fopen(filename, "w");

	// we will give input until the user doesn't press -1

	int input;
	while(1) {
		printf("Enter a number ");
		scanf("%d", &input);

		if (input == -1) 
			break;
		else
			fprintf(fptr, "%d\n", input);
	}

	fclose(fptr);
}
int main() {

	read_an_entire_file("dummy.txt");
	write_to_a_file("newfile.txt");
	return 0;
}