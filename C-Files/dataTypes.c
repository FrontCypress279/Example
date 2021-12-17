#include<stdio.h>
#include<stdlib.h>
int main(void){
	int Age = 23;
	float Score = 96.5;
	char grade = 'A';
	char comments[] = "Good job!";

	printf("%d\n%.1f\n%c\n%s",Age,Score,grade,comments);
	return EXIT_SUCCESS;
}
