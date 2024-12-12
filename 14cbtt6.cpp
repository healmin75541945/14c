#include<stdio.h>
#include<string.h>

int main() {
    char str[] = "He lo world";
    int length = strlen(str);
    int check;
    
    for (int i = 0; i < length; i++) {
		if(str[i] != ' '){
			printf("%c", str[i]);
	    	check++;
		}
    }
    printf("\ntrong chuoi co %d chu", check);

    return 0;
}
