#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define Max_REGISTERS 10

int registers[Max_REGISTERS] = {0};//모든 레지스터 0으로 초기화
int count = 0;
char line[256];

typedef struct {
    char *opcode;
    char *operand1;
    char *operand2;
} Instruction;
//문자열 파싱 16진수인지 레지스터인지 확인
int get_operand_value(const char* operand) {
    int value = 0;
    if (operand[0] == 'R') {
        // 레지스터 번호로부터 값을 가져옴
        //문자열을 정수로 변환
        int reg_index = atoi(operand + 1) - 1;
        value = registers[reg_index];
    } else if (sscanf(operand, "%x", &value) == 1) {
        // 16진수 값 파싱
        return value;
    }
    return value;
}
int main(void){
    Instruction instruction;

    FILE *file = fopen("C:\\Users\\ldj23\\Desktop\\practice\\computerstructure\\hw1\\input.txt", "r");
    if(file == NULL){
        perror("Unable to open the file");
        return 1;
    }

    while(fgets(line, sizeof(line), file)){

        if(sscanf(line, "%c %s %s", &instruction.opcode, &instruction.operand1, &instruction.operand2) == 3){

        switch (instruction.opcode) {
            case '+': // 덧셈 연산
                registers[0] = registers[operand1] + registers[operand2];
                break;
            case '-': // 뺄셈 연산
                registers[0] = registers[operand1] - registers[operand2];
                break;
            case '*': // 곱셈 연산
                registers[0] = registers[operand1] * registers[operand2];
                break;
            case '/': // 나눗셈 연산
                if (registers[operand2] != 0) {
                    registers[0] = registers[operand1] / registers[operand2];
                } else {
                    printf("Division by zero error\n");
                }
                break;
            case 'M': // 레지스터 이동
                registers[operand1] = registers[operand2];
                break;
            case 'J': // 점프 실행
                fseek(file, operand1, SEEK_SET); // 점프 위치로 파일 포인터 이동
                break;
            // 추가적인 명령어 처리   
        }
    }
 }
    fclose(file);
    return 0;
}