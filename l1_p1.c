#include <stdio.h>
#include <string.h>
int main(){
	char s[100];
	printf("Enter a string: ");
	gets(s);

	int cnt = 0;
	for(int i = 0; s[i] != '\0'; i++)
		cnt++;
	printf("Length of the string: %d", cnt);
}