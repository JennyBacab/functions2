#include<stdio.h>
#include<string.h>

void InvertString (char(userInput[50])){
	int i;
	int largo = strlen(userInput);
	for(i=largo-1; i>=0; i--){
		printf("%c", userInput[i]);
	}
}

int main(void) {
	char userInput[50];
	scanf("%s", &userInput);
	InvertString(userInput);
	return 0;
}
