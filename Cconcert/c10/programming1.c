#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(void){
    char s[50];
    printf("문자를 입력하세요 : ");
    fgets(s, 50, stdin);

    for (int i = 'a'; i < 'z'; i++){
        int count = 0;
        for (int j = 0; s[j] != NULL; j++){
            if(s[j] == i)
                count++;
        }
        if(count != 0)
            printf("%c 문자가 %d 번 등장\n", i, count);
    }
    return 0;
}