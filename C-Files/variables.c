#include<stdio.h>
#include<stdlib.h>
int main(void){
	char characterName[] = "Arthur";
	int characterAge = 59;
	printf("There was once a man named %s\n", characterName);
	printf("he was %d years old.\n", characterAge);
	characterAge = 23;
	printf("He really liked the name %s\n", characterName);
	printf("but he really wanted to go back and be %d again.\n", characterAge);
	return EXIT_SUCCESS;
}
