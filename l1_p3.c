#include <stdio.h>
#include <string.h>
int main(){
	char s[100], ss[100];
	printf("Enter a String: ");
	gets(s);
	int i = 0, j = 0;
	while(s[i] != '\0'){
		if(s[i] != ' '){
			ss[j] = s[i];
			j++;
		}
		i++;
	}
	printf("After removing the white spaces:\n%s", ss);
	return 0;
}
