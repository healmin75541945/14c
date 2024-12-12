#include<stdio.h>
#include<string.h>

int main() {
    char str[] = "He lo world";
    int length = strlen(str);
    int check;
    if(str[0] != ' '&&length > 0){
    	check++;
	}
    for (int i = 1; i < length; i++) {
        if(str[i] == ' '&&str[i + 1] != ' '){
        	check++;
		}
    }
    printf("trong chuoi co %d tu", check);

    return 0;
}
