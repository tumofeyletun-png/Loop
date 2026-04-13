#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	FILE *f1, *f2;
	char line[100];
	int year;
	char name[100];
	f1 = fopen("lab_6.txt", "r");
	if (f1 == NULL){
		printf("ERROR f1");
	}
	f2 = fopen("kol_6.txt","w");
	if (f2 == NULL){
		printf("ERROR");
	}
	while (fgets(line, sizeof(line), f1)) {
		sscanf(line,"%*s %s %*s %d", name, &year);
		if(name[0] == 'Â' && year > 1980){
			fprintf(f2,"%s", line);
		}
	}
	return 0;
}
