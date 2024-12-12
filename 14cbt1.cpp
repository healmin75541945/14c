#include<stdio.h>
#include<string.h>


void inputString(char str[]){
	fgets(str, 50, stdin);
}

void printString(char str[]){
	fputs(str, stdout);
}
int demPT(char str[]){
	return strlen(str);
}


int main(){
	char string[50];
	inputString(string);
	
	printString(string);
	
	int n = demPT(string);
	
	printf("%d", n);
	
	
	return 0;	
}
