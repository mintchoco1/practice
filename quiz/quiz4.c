#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    FILE *fp = fopen("plain.txt", "w");
    if (fp == NULL) {
        printf("파일을 열 수 없습니다.\n");
        exit(0);
    }

    int encrypt_key = 0;
    char plain_text[30];

    printf("평문을 입력하시오: ");
    fgets(plain_text, sizeof(plain_text), stdin);
    size_t len = strlen(plain_text);
    if (plain_text[len-1] == '\n') plain_text[len-1] = '\0'; // Remove newline character
    fputs(plain_text, fp);

    printf("암호화 키: ");
    scanf("%d", &encrypt_key);

    for (int i = 0; plain_text[i] != '\0'; i++) {
        if ((plain_text[i] >= 'a' && plain_text[i] <= 'z') || (plain_text[i] >= 'A' && plain_text[i] <= 'Z')) {
            char offset = (plain_text[i] >= 'a') ? 'a' : 'A';
            plain_text[i] = (plain_text[i] - offset + encrypt_key) % 26 + offset;
        }
    }

    printf("암호문: %s\n", plain_text);
    fputs(plain_text, fp);

    fclose(fp);
    return 0;
}
