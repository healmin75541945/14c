#include<stdio.h>
#include<string.h>

int main() {
    char str[] = "Hello World";
    int length = strlen(str);
    char searchchar;
    int check;
    printf("Nhap ki tu bat ki ");
    scanf("%c", &searchchar);
    for (int i = 0; i < length; i++) {
        if(searchchar == str[i]){
        	check++;
		}
    }
    printf("ki tu %c xuat hien %d lan trong chuoi ", searchchar, check);

    return 0;
}
