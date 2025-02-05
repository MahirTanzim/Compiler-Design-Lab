#include <stdio.h>
#include <string.h>
int main(){
	char s[100];
	printf("Enter a Stirng: ");
	gets(s);
	int cnt = 0;
	for(int i = 0; s[i] != '\0'; i++)
		if(s[i] == ' ')
			cnt++;
	printf("No. of white space in the string: %d", cnt);
}
