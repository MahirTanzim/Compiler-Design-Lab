#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    char s[200];
    gets(s);
    int cnt_d = 0, cnt_v = 0, cnt_c = 0;
    for(int i = 0; s[i] != '\0'; i++){
        s[i] = tolower(s[i]);
        if(s[i] >= '0' && s[i] <= '9')
            cnt_d++;
        else if(s[i] >= 'a' && s[i] <= 'z'){
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
                cnt_v++;
            else
                cnt_c++;
        }
    }
    printf("Digits: %d\n", cnt_d);
    printf("Vowels: %d\n", cnt_v);
    printf("Consonant: %d\n", cnt_c );

}
