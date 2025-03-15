#include <stdio.h>

int main(void){

    FILE *file = fopen("input.txt", "r");
    if(file == NULL){
        perror("Unable to open the file");
        return 1;
    }
    
}